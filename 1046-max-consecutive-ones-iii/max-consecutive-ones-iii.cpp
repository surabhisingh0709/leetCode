class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int l=0;
        int r=0;

        int n = nums.size();
        int zero=0;

        while(r<n)
        {
            if(nums[r]==0) zero++;
            if(zero>k)
            {
                while(nums[l]!=0)l++;
                l++;
                zero--;
            }

            
            ans = max(ans,r-l+1);
            r++;

        }
        return ans;
        
    }
};