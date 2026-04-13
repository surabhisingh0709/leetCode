class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n==1)return nums[0];

        for(int i =0 ; i< n ; i++)
        {
            if(i==0 )
            {
               if(nums[i]!=nums[i+1]) return nums[i];
               
            }
            else if(i==n-1 )
            {
               if(nums[i]!=nums[i-1]) return nums[i];
              
            }
            else 
            {
                if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]) return nums[i];           
            }
        }
        return -1;

        /*int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid = high - (low+high)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return mid;
            }
            else if(nums[mid] == nums[mid-1])
            {
                if((mid-low-1)%2==1) high=mid-2;
                else low = mid+1;           
            }
            else
            {
                if((mid-low)%2==1)high=mid-1;
                else low=mid+2;
               
            }
        }
        return -1;*/
    }
};