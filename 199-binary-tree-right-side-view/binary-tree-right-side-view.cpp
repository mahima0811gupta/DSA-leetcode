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
// isme har level ka jo sbse last node h wahi print karna h
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr) return{};
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            TreeNode*temp=nullptr;
           while(n--){
             temp=q.front();
            q.pop();
            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);

           }
            ans.push_back(temp->val);
           }
           return ans;
    }
};