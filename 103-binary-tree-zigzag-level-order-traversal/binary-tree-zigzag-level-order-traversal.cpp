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
          vector<vector<int>>ans; //null hAI
        queue<TreeNode*>q;
        if(root==nullptr)    return ans;
         
         q.push(root);
         bool lefttoright=true;
         while(q.size()>0){
           int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
              TreeNode*temp=q.front();
              q.pop();
              v.push_back(temp->val);
              if(temp->left!=nullptr)   q.push(temp->left);

              if(temp->right!=nullptr)   q.push(temp->right);

              if(lefttoright){

              }
            }

            if(lefttoright){
                ans.push_back(v);
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            //direction chnge krne h 
            lefttoright=!lefttoright;
            
         }
         return ans;
    }
};