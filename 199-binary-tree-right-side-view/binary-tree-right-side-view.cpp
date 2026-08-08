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
    void traverse(TreeNode* root, int level ,map<int,int>&mp)
    {
        if(root==nullptr) return;

        mp[level]=root->val;
        traverse(root->left ,level+1,mp);
        traverse(root->right , level+1,mp);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        map<int,int>mp;
        int level;
        traverse(root,0,mp); 

        for(auto it:mp)
        {
            ans.push_back(it.second);
        }

        return ans;

        
    }
};