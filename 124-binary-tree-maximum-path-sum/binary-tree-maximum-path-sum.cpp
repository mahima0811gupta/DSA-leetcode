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
    int ans=INT_MIN;
    
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=root->val+sum(root->left);
        int right=root->val+sum(root->right);
        int maxi1=max(left,right);
        int maxi=max(maxi1,root->val);
        ans=max(ans,max(left+right-root->val,maxi));
        return max(left,max(right,root->val));
    }
    int maxPathSum(TreeNode* root) {
        int run=sum(root);
        return ans;
    }
};