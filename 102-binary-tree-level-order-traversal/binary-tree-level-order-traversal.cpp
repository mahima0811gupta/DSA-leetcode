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
    int levels(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void nthorder(TreeNode* root,int cur,int level,vector<int>&v){
         if(root==nullptr) return;
         if(cur==level){
            v.push_back(root->val);
            return;
         }
         nthorder(root->left,cur+1,level,v);
           nthorder(root->right,cur+1,level,v);


    }

    void lOrder(TreeNode* root,vector<vector<int>>&ans){
        int n=levels(root);
        for(int i=1;i<=n;i++){
            vector<int>v;
            nthorder(root,1,i,v);
            ans.push_back(v);

        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>>ans;
      lOrder(root,ans);
      return ans;  
    }
};