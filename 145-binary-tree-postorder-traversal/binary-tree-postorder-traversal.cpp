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
    vector<int> postorderTraversal(TreeNode* root) {

        if(root==NULL) return {};
        vector<int>ans;
        stack<TreeNode*>st;
        stack<TreeNode*>st1;
        st.push(root);
        while(!st.empty()){
            TreeNode*temp=st.top();
            st.pop();
            st1.push(temp);
             if(temp->left)  st.push(temp->left);
               if(temp->right)  st.push(temp->right);
        }
        while(!st1.empty()){
            int p=st1.top()->val;
            ans.push_back(p);
            st1.pop();
        }
        return ans;
    }
};