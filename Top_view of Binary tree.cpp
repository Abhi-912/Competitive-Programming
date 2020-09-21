void btree::top_view(Node *leaf){
    if(leaf==nullptr) return;
    queue<Node*> q;                                //For storing the Node.
    map<int,int> m;                                //For storing value distance pair.
    int h=0;                                       //assign height
    leaf->hd=h;                                   //assigning the root's height.
    q.push(leaf);                                  //pushing the root Node.
    while(q.size()){
        h=leaf->hd;                                //accessing the height of node.
        if(m.count(h)==0) m[h]=leaf->data;        //Checking the presence of height in the map.
        if(leaf->left){                           //same process with left child.
            leaf->left->hd=h-1;
            q.push(leaf->left);
        }
        if(leaf->right){                          //same process with right child.
            leaf->right->hd=h+1;
            q.push(leaf->right);
        }
        q.pop();                                  //popping the used node.
        leaf=q.front();                           //process coont.
    }
    for(auto &i:m) cout<<i.second<<" ";           //printing the nodes.
}
