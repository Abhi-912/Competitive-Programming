/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int j;
    map<int,int> in_order;
    TreeNode* buildTree_rec(vector<int>& inorder,vector<int>& postorder,int start,int end) {
        
        if(start>end) return NULL;
        
        //Finding the root Node(Last element in the postorder traversal)
        TreeNode *root=new TreeNode(postorder[j]);
        
        
        if(start==end){
            j--;
            return root;
        }

        int index=-1;
        //Finding the index of root in inorder traversal
        index=in_order[postorder[j]];
        j--;  //Decreasing the pointer to select new roots in left and right subtree
        
        root->right=buildTree_rec(inorder,postorder,index+1,end); //For right subtree same process
        root->left=buildTree_rec(inorder,postorder,start,index-1); //For left subbtree same process
        
        return root;
        }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        //Storing the positions of all Nodes of inorder in a map to find rootnode in O(n)    
        int n=postorder.size();
        
        if(n==0) return NULL;
     
        for(int i=0;i<inorder.size();i++){
            in_order[inorder[i]]=i;
        }
        int start=0;  
        int end=n-1;
        j=n-1;
        
        return buildTree_rec(inorder,postorder,start,end);
    }
};
