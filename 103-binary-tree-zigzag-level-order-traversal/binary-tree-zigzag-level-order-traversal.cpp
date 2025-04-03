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
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root==NULL) return res;
        q.push(root);
        bool rev=true;
        while(!q.empty()){
            vector<int> v;
            int size=q.size();
            while(size--){
                TreeNode* ele=q.front();
                v.push_back(ele->val);
                q.pop();
                if(ele->left){
                    q.push(ele->left);
                }
                if(ele->right){
                    q.push(ele->right);
                }
            }
            if(rev){
                res.push_back(v);
            }
            else{
                reverse(v.begin(),v.end());
                res.push_back(v);
            }
            rev=!rev;
            
        }
        return res;
    }
};