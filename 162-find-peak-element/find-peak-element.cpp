class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        //int ans=-1;
        int low=1;
        int high=n-2;

        if(n==1) return 0;
        if(nums[0] >nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        while(low<=high)
        {
            int mid = (low+high)/2;


            if(nums[mid] > nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if(nums[mid] > nums[mid+1]) high=mid;
            else if(nums[mid] < nums[mid+1]) low=mid+1;
        }
        return -1;



       /* if(n==0) return 0;
        else if(nums[0] >nums[1]) ans=0;
        else if(nums[n-1] > nums[n-2]) ans= n-1;

        for(int i =1 ;i< n-1 ; i++)
        {
         
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) ans= i;
            break;
            
        }
        return ans;*/

    }
};