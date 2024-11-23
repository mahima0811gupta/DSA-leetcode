/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return NULL; 
        if(root == p || root == q) return root;

         // left and right me check kro ki p/q present h ya nhi
        TreeNode* leftN = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightN = lowestCommonAncestor(root->right, p, q);

        // If both left and right are non-null, root hi LCA hoga
        if (leftN != nullptr && rightN != nullptr) return root;
        // 
        if(leftN!=nullptr && rightN==nullptr) return leftN;

        return rightN;
    }
};
