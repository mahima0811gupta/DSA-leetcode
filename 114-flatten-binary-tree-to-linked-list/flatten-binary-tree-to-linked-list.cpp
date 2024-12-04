

class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==nullptr) return;
     TreeNode*l=root->left;
      TreeNode*r=root->right;
      root->left=nullptr;
      root->right=nullptr;
      flatten(l);
       flatten(r);
       root->right=l;
       TreeNode*temp=root;
       while(temp->right!=nullptr){
        temp=temp->right;
       }
       temp->right=r;








    }
};