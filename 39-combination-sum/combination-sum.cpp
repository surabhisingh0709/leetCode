class Solution {
public:
    void comb(int idx, int target ,vector<int>&ds, vector<vector<int>>&ans,vector<int>& candidates)
    {
        if(idx==candidates.size())
        {
            if(target==0)ans.push_back(ds);
            return;
        }
        if(candidates[idx]<=target)
        {
            ds.push_back(candidates[idx]);
            comb(idx,target - candidates[idx],ds, ans,candidates);
            ds.pop_back();
        }
        
        comb(idx+1,target,ds,ans,candidates);

    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        comb(0,target,ds,ans,candidates);
        return ans;
        
    }
};