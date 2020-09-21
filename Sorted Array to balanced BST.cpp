/*1) Get the Middle of the array and make it root.
2) Recursively do same for left half and right half.
      a) Get the middle of left half and make it left child of the root
          created in step 1.
      b) Get the middle of right half and make it right child of the
          root created in step 1.*/
          
 //Only Utility Program
 TreeNode *createBalancedTree(const vector<int> &A,int start,int end){
 
     if(start>end) return NULL;
     
     int mid=(start+end)/2;
     TreeNode *root=new TreeNode(A[mid]);
     
     root->left=createBalancedTree(A,start,mid-1);
     
     root->right=createBalancedTree(A,mid+1,end);
     
     return root;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
      
    if(A.size()==NULL) return 0;
    else{
        TreeNode *root=createBalancedTree(A,0,A.size()-1);
        
        return root;
    }
}
