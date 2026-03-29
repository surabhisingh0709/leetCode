class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high= n-1;
        int ans=INT_MAX;

        if(nums[0] < nums[n-1]) 
        {
            ans= nums[0];
            return ans;
        }

        while(low<=high)
        {
            int mid = (low + high)/2;

            if(nums[mid]<ans) ans = nums[mid];

            else if(nums[mid] > nums[high]) // 4567123 min in right half
            {
                low= mid+1;
            }
            else high = mid-1;
        }
        return ans;
            
            
       
    }
};