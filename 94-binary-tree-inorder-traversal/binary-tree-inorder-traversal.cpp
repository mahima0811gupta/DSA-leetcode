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
        stack<TreeNode*>s;
        vector<int>ans;
        TreeNode*temp=root;

        while(s.size()>0 || temp!=nullptr){
            if(temp!=nullptr){
            s.push(temp);
            temp=temp->left;
            }
            else{
                temp=s.top();
                ans.push_back(temp->val);
                s.pop();
                temp=temp->right;
            }
        }

        return ans;
    }
};