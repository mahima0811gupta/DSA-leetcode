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



        TreeNode* binarytree(vector<int>& nums,int start,int end){
            if(start>end) return nullptr;
            int mid=start+(end-start)/2;
            TreeNode*root=new TreeNode(nums[mid]);
             root->left=binarytree(nums,start,mid-1);
              root->right=binarytree(nums,mid+1,end);

             return root;


   }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      if(nums.empty()) return nullptr;
       int n=nums.size();
       return binarytree(nums,0,n-1);
        
    }
};