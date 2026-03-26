class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>freq;
        int minFreq=(n/3)+1;
        for(int i =0 ; i<n ; i++)
        {
            freq[nums[i]]++;  
            if(freq[nums[i]]==minFreq) ans.push_back(nums[i]);
        }
        return ans;
        
        
    }
};