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

     TreeNode*iop(TreeNode* root){
       TreeNode*pred=root->left;
       while(pred->right!=nullptr){
        pred=pred->right;

       }
       return pred;

     }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(root->val==key)
        {
        // 0 child
        if(root->left==nullptr && root->right==nullptr) 
        return nullptr;
         

         // 1 child
          if(root->left==nullptr || root->right==nullptr) {
            // av left right dekhe kon null nhi h
          if(root->left!=nullptr)  return root->left;
         else
         return root->right;
          }

          // 2child
          if(root->left!=nullptr && root->right!=nullptr) {
                // find predessor/ succesor
                TreeNode*pred=iop(root);
                // replace root with pred
                root->val=pred->val;
                // delete the pred  as pred in left side
                root->left=deleteNode(root->left,pred->val);
          }
        }
         else if(root->val>key)  // go left
         {
            root->left=deleteNode(root->left,key);

         }
         else  // go right
              { 
                root->right=deleteNode(root->right,key);
                      }
  
    
return root;

    }
 
};