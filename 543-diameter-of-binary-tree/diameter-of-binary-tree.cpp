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

     int levels(TreeNode*root){
        if(root==nullptr) return 0;
        return 1+max(levels(root->left),levels(root->right));
     }

    
     void helper(TreeNode*root,int &maxdia){
        if(root==nullptr)  return;
       int dia=levels(root->left)+levels(root->right);
        maxdia=max(dia,maxdia);
        helper(root->left,maxdia);
        helper(root->right,maxdia);
      

     }

       int diameterOfBinaryTree(TreeNode* root) {
         if(root==nullptr) return 0;
         int maxdia=INT_MIN;
         helper(root,maxdia);
         return maxdia;
    }
};