bool isCycleutil(int node, int par, vector<int> a[], int vis[])
{   //Simple DFS 
    vis[node] = 1;
    for(auto &curr_node : a[node])
    {
        if(!vis[curr_node])
        {
            if(isCycleutil(curr_node, node, a, vis) == true) 
            return true;
        }
        else if(curr_node!=par || curr_node == node) return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   //vector<bool> vis(V, false);
   int vis[V];
   for(int i = 0; i < V; i++) vis[i] = 0;
   for(int i = 0; i < V; i++)
   {
       if(!vis[i])
       {
           if(isCycleutil(i, -1, g, vis)==true)
           return true;
       }
   }
    return false;
   
}
