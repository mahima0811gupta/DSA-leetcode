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

   TreeNode*deletehelper(TreeNode*root,unordered_set<int>st,vector<TreeNode*>&result){
    if(root==nullptr) 
    return nullptr;
   root->left=deletehelper(root->left,st,result);
   root->right=deletehelper(root->right,st,result);

   if(st.find(root->val)!=st.end()) // root val present ho 
   {
    if(root->left!=nullptr) result.push_back(root->left);
        if(root->right!=nullptr) result.push_back(root->right);

        return nullptr;  // wo particular node delete ho juayega
   }
   else
   return root;

   }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int>st;
        vector<TreeNode*>result;
        for(auto &num:to_delete){
            st.insert(num);
        }
        deletehelper(root,st,result);

      if(st.find(root->val)==st.end()) // root present nhi h st me then
      result.push_back(root);
        return result;
    }
};