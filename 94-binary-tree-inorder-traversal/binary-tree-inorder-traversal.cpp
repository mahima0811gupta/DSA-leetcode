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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
       TreeNode*temp=root;
       while(st.size()>0 || temp!=nullptr){
          if(temp!=nullptr){
            st.push(temp);
            temp=temp->left;
          }
          else{                // matlb temp ka left null ho gya h 
            temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            temp=temp->right;
          }

       }
       return ans;
    }
};