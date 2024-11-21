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
     TreeNode*solve(vector<int>& preorder, vector<int>& inorder,int start,int end,int &indx){
        if(start>end) return nullptr;
       
       int rootval=preorder[indx];
       int i=start;
       for(;i<=end;i++) // inorder me traverse kar rhe h
       {
        if(inorder[i]==rootval)
          break;
       }
         indx++;
         
         TreeNode*root=new TreeNode(rootval);
         root->left=solve(preorder,inorder,start,i-1,indx);
         root->right=solve(preorder,inorder,i+1,end,indx);
         return root;
     }
     
      TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
      int n=preorder.size();
      int indx=0;
      return solve(preorder,inorder,0,n-1,indx);
    
     }
 };