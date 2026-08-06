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
    int ht(TreeNode*root)
    {
        if(root==nullptr) return 0;

        int left = ht(root->left);
        int right = ht(root->right);

        return 1+max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {

        if(root==nullptr) return true;

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        bool cond = true;
        if(abs(ht(root->left) - ht(root->right))>1) cond =false;

        if(cond && leftAns && rightAns) return true;
        else return false;

        
    }
};