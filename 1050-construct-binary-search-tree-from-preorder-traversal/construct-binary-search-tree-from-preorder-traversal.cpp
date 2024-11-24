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
    TreeNode* insert(TreeNode* root, int val) {
        if (root == nullptr) {
            return new TreeNode(val);
        }

        if (root->val > val) { // Go left
            if (root->left == nullptr) {
                root->left = new TreeNode(val);
            } else {
                insert(root->left, val);
            }
        } else { // Go right
            if (root->right == nullptr) {
                root->right = new TreeNode(val);
            } else {
                insert(root->right, val);
            }
        }

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) return nullptr;

        TreeNode* root = new TreeNode(preorder[0]); 
        for (int i = 1; i < preorder.size(); i++) {
            insert(root, preorder[i]); 
        }
        return root;
    }
};
