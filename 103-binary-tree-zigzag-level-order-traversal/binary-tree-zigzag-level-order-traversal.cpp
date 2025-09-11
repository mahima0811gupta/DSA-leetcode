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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> ans;
        bool righttoleft=true;
        while(!q.empty()){
            int n=q.size();
             vector<int>v;
            for(int i=0;i<n;i++){
                TreeNode*node=q.front();
                q.pop();

                v.push_back(node->val);
                if(node->right!=NULL)
                q.push(node->right);
                if(node->left!=NULL)
                q.push(node->left);
              
            }
            if(righttoleft==false)
            ans.push_back(v);
            else{
                reverse(v.begin(),v.end());
                 ans.push_back(v);
            }

       righttoleft = !righttoleft;

        }

        return ans;
    }
};