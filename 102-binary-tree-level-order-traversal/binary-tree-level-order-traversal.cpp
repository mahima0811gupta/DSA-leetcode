
class Solution {
public:
 int level(TreeNode* root) {
        if(root==nullptr)  return 0;
        return 1+max(level(root->left),level(root->right));
    }
 void nthlevel(TreeNode*root,int curlevel,int level, vector<int>&vec){
 if(root==NULL) return;
 if(curlevel==level)  {
   vec.push_back(root->val);
    return;
}
nthlevel(root->left,curlevel+1,level,vec);
nthlevel(root->right,curlevel+1,level,vec);  
 }
void lorder(TreeNode*root,vector<vector<int>>&ans){
    int n=level(root);
    for(int i=1;i<=n;i++){
        vector<int>vec;
        nthlevel(root,1,i,vec);
    
        ans.push_back(vec);
    }


}
 vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>>ans;
     lorder(root,ans);
     return ans;    
    }
};