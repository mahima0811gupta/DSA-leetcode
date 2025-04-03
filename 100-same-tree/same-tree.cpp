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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        if(p==NULL&&q!=NULL){
            return false;
        }
        if(p!=NULL&&q==NULL){
            return false;
        }
        if(p==NULL&&q==NULL){
            return true;
        }
        q1.push(p);
        q2.push(q);
        while(!q1.empty()&&!q2.empty()){
            TreeNode* r1=q1.front();
            TreeNode* r2=q2.front();
            q1.pop();
            q2.pop();
            if(r1->val!=r2->val) return false;
            if(r1->left!=NULL){
                if(r2->left==NULL) return false;
                else{
                    q1.push(r1->left);
                    q2.push(r2->left);
                }
            }
            if(r2->left!=NULL){
                if(r1->left==NULL) return false;
                else{
                    q1.push(r1->left);
                    q2.push(r2->left);
                }
            }
            if(r2->right!=NULL){
                if(r1->right==NULL) return false;
                else{
                    q1.push(r1->right);
                    q2.push(r2->right);
                }
            }
            if(r1->right!=NULL){
                if(r2->right==NULL) return false;
                else{
                    q1.push(r1->right);
                    q2.push(r2->right);
                }
            }
        }
        return true;

    }
};