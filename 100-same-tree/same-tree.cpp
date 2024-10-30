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
        //base case
        if(p==nullptr && q==nullptr)
        return true;
         if (p == nullptr || q == nullptr)
         return p==q;
         



        if(p->val!=q->val)
        return false;
        bool lefttree=isSameTree(p->left,q->left);
        if(lefttree==false)
        return false;
        bool righttree=isSameTree(p->right,q->right);
        if(righttree==false)
        return false;
        
        return true;






    }
};