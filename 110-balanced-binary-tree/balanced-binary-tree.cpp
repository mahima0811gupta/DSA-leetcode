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
    bool result=true;
    int balance(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=1+balance(root->left);
        int right=1+balance(root->right);
        if(abs(right-left)>1){
            result=false;
        }
        return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int ans=balance(root);
        return result;
    }
};
        