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
  
    int height(TreeNode*root){
        if(root==nullptr)            return 0;
        return 1+max(height(root->left),height(root->right));

    }   //time complexuty of height function is 0(n)
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)  return 0;
        //// diamertre ya to left side ho skta ya right side ya to jo root se hokr .teno me jo maxi hoga wahi hoga


//here here we find 3 function for each node..means time c is n2
        int left=diameterOfBinaryTree(root->left);
          int right=diameterOfBinaryTree(root->right);
          int curr=height(root->left)+height(root->right);

          return max(curr,max(left,right));
    }
};