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
    int ans=0;
    int length(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=1+length(root->left);
        int right=1+length(root->right);
        ans=max(ans,left+right-2);
        return max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int run=length(root);
        return ans;
    }
};