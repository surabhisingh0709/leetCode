class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        //BETTER
        int low=1;
        int high = n-2;
        if(n==1)return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];

        while(low<=high)
        {
            int mid= (low+high)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            //we are on left half
            else if( (mid%2 == 0 && nums[mid]==nums[mid+1]) || (mid%2 == 1 && nums[mid]==nums[mid-1])) low=mid+1;
            
            //we are on right half therefore num on left
            else high=mid-1;
        }
        return -1;




        //MY APPROACH
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



        //BRUTE 
        /*if(n==1)return nums[0];

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
        return -1;*/

        
    }
};