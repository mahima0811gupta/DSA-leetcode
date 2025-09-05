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


 /// har node ko swap kar do  
class Solution {
public:
    void swap(TreeNode*root){
        if(root==nullptr) return;
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
        swap(root->left);
        swap(root->right);


    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return 0;
        swap(root);
        return root;
    }
};