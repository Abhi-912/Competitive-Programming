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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        if(root == NULL) return vv;
        stack<TreeNode*> s1, s2;
        s1.push(root);
        vector<int> v;
        while(!s1.empty() || !s2.empty()) {
            while(!s1.empty()) {
                
                TreeNode* temp;
                temp = s1.top();
                if(temp != NULL) {
                v.push_back(temp->val);
                s1.pop();
                if(temp ->left != NULL) s2.push(temp->left);
                if(temp->right != NULL) s2.push(temp->right);
                }
            }
            if(v.size()!=0) {
            vv.push_back(v);
            v.clear();
            }
            while(!s2.empty()) {
                TreeNode* temp;
                temp = s2.top();
                if(temp != NULL) {
                v.push_back(temp->val);
                s2.pop();
                if(temp->right != NULL) s1.push(temp->right);
                if(temp->left != NULL) s1.push(temp->left);
                }
            }
            if(v.size()!=0) {
            vv.push_back(v);
            v.clear();
            }
        }
        return vv;
    }
};
// Create two stack and store root in one stack and then using while loop check in any of the stack is not empty. If not empty pop out the value and print it and according
//traversal if root is in the first stack then push it's children to second stack accordingly(if traversal is done from left to right push first left value then right value.

//Reference:- https://www.youtube.com/watch?v=iJT9JrrFQ44&list=PLNxqWc8Uj2LRbsOlBiPJZAyZpaUwdDepd&index=6
