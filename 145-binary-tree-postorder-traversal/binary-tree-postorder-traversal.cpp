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
 //using two stack
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)  return ans;
        stack<TreeNode*>st;
          stack<TreeNode*>helper;
        st.push(root);
        while(st.size()>0){
            TreeNode*temp=st.top();
            st.pop();
            helper.push(temp);
            if(temp->left!=nullptr)
            st.push(temp->left);
             if(temp->right!=nullptr)
            st.push(temp->right);

        }
        while(!helper.empty()){
            TreeNode*temp=helper.top();
            ans.push_back(temp->val);
            helper.pop();
        }
        return ans;
    }
};