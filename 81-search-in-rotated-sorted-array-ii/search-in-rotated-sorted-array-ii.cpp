class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0 ;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = (high + low)/2 ;

            if(nums[mid] == target) return 1;
            
            if(nums[low]==nums[mid] && nums[mid]==nums[high] && nums[low]==nums[high])
            {
                low++;
                high--;
            }

            else if( nums[mid] >= nums[low] )//left part sorted
            {
                if(target>= nums[low] && target < nums[mid])//target in sorted part or not 
                {
                    high = mid-1;
                }
                else low = mid+1;
            }
            else 
            {
                if (target <= nums[high] && target > nums[mid]) low = mid+1;
                else high = mid-1;
            }
        }
        return 0;
    }
};