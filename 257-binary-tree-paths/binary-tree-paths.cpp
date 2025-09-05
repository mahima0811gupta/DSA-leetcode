
class Solution {
public:
    void helper(TreeNode* root,string path,vector<string>&ans){
            if(root==nullptr)  return;
            string a=to_string(root->val);

            //base case
            if(root->left==nullptr && root->right==nullptr){
                path+=a;
                ans.push_back(path);
                return;
            }

            helper(root->left,path+a+"->",ans);
             helper(root->right,path+a+"->",ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
     vector<string>ans;
    helper(root,"",ans);
    return ans;
        
    }
};