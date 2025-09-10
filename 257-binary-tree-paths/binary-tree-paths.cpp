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

   void helper(TreeNode* root,string path, vector<string>&ans){
    if(root==NULL)  return;
      string a=to_string(root->val);
      if(root->left==NULL && root->right==NULL) {
        path+=a;
        ans.push_back(path);
      }

     helper(root->left,path+a+"->",ans);
     helper(root->right,path+a+"->",ans);

   }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);

return ans;
    }
};