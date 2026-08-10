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
    bool isBST(TreeNode* root, long long min, long long max)
    {
        if(root==nullptr) return true;
        if(root->val>=max || root->val<=min) return false;
        bool left = isBST(root->left, min, root->val);
        bool right = isBST(root->right, root->val, max);

        if(left && right) return true;
        else return false;

    }
public:
    bool isValidBST(TreeNode* root) {
        if(root==nullptr ||(root->left==nullptr && root->right ==nullptr)) return true;
        return isBST(root,LLONG_MIN, LLONG_MAX);
        
    }
};