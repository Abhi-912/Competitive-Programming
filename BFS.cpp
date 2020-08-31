int bfs(int i){
    queue<int> q;
    vis[i]=1;
    q.push(i);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto &j:ar[u]){
            if(vis[j]==0){
                vis[j]=1;
                q.push(j);
            }
        }
    }
}
//Change according to your use
//Intial Code
