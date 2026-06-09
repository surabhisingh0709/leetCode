class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int n = nums.size();
        int max_sum = INT_MIN;
        for(int i =0 ; i<n ; i++)
        {
            int sum=0;
            for(int j =i ; j<n ; j++)
            {
                sum=sum+nums[j];
                max_sum = max(sum,max_sum);
            }
        }
        return max_sum;*/

        //KADANES ALGO
        int n =nums.size();
        int curr_sum=0;
        int max_sum = INT_MIN;

        for(int i =0 ; i< n ; i++)
        {
            curr_sum += nums[i];
            max_sum = max(max_sum,curr_sum);
            if(curr_sum<0) curr_sum=0;
        }
        return max_sum;
    }
};