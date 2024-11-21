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
    int sumroot(TreeNode* root,int cur){
        if(root==nullptr) return 0;
        cur=(cur*10)+root->val;
        if(root->left==nullptr && root->right==nullptr){
            return cur;
        }

        int l=sumroot(root->left,cur);
        int r=sumroot(root->right,cur);
        return l+r;

    }
    int sumNumbers(TreeNode* root) {
     
     return sumroot(root,0);
    }
};