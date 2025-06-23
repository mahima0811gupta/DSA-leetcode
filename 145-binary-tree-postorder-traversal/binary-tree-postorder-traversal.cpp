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
  //approach same approach like preoder but here fisrt root  left  then right and the the end reverse the ans
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)  return ans;
        stack<TreeNode*>st;
        st.push(root);
        while(st.size()>0){
            TreeNode*temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->left!=nullptr)
            st.push(temp->left);
             if(temp->right!=nullptr)
            st.push(temp->right);

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};