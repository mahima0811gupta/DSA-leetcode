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

    int level(TreeNode*root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    bool diameter(TreeNode*root){
        if(root==NULL) return true;
       int dia=abs(level(root->left)-level(root->right));
        if(dia>1) return false;
       return diameter(root->left)&& diameter(root->right);
    }
    bool isBalanced(TreeNode* root) {
          if(root==NULL) return true;
          return diameter(root);
    }
};