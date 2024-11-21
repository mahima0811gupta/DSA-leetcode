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


    bool preorder(TreeNode* root,int sum,int &targetSum){
     if(root==nullptr) return false;

     sum+=root->val;

     if(root->left==nullptr && root->right==nullptr){
        if(sum==targetSum) 
        return true;

        return false;
     }

     bool leftside=preorder(root->left,sum,targetSum);
     bool rightside=preorder(root->right,sum,targetSum);

     

     return leftside||rightside;


    }
    bool hasPathSum(TreeNode* root,int targetSum ) {
        int sum=0;

        bool result=preorder(root,sum,targetSum);
        return result;
    }
};