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
       void preOrder(TreeNode* root, int sum, int target, vector<int>& temp, vector<vector<int>>& ans){
        if(root==NULL) return;

        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL && sum+root->val==target){
            ans.push_back(temp);
        }

        preOrder(root->left,sum+root->val,target,temp,ans);
        preOrder(root->right,sum+root->val,target,temp,ans);
        temp.pop_back();
    }


    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int> temp;
        preOrder(root,0,targetSum,temp,ans);
        return ans;
    }
};