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
/*public:
    int ht(TreeNode*root)
    {
        if(root==nullptr) return 0;

        int left = ht(root->left);
        int right = ht(root->right);

        return 1+max(left,right);
    }*/

public:
    pair<bool,int> balFast(TreeNode*root)
    {
        if(root==nullptr) return{true,0};

        pair<bool,int>left = balFast(root->left);
        pair<bool,int>right = balFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool cond = abs(left.second - right.second) <=1;

        pair<bool,int> ans;
        ans.first = false;
        if(leftAns && rightAns && cond) ans.first = true;
        ans.second = 1 + max(left.second,right.second);

        return ans;

    }
public:
    bool isBalanced(TreeNode* root) {

        /*if(root==nullptr) return true;

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        bool cond = true;
        if(abs(ht(root->left) - ht(root->right))>1) cond =false;

        if(cond && leftAns && rightAns) return true;
        else return false;*/

        return balFast(root).first;
        
    }
};