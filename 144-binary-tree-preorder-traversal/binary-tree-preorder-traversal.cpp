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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        if(root!=nullptr) st.push(root);
        vector<int>ans;
        while(st.size()>0){
            TreeNode*temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right!=nullptr)
            st.push(temp->right);
            if(temp->left!=nullptr)
            st.push(temp->left);
            
        
            



        }
        return ans;
    }
};