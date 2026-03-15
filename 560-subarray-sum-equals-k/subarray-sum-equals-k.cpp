class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*map<int,int> sMap;
        int n= nums.size();
        int psum=0;
        int count=0;
        for(int i =0 ; i<n ; i++)
        {
            psum=psum+nums[i];

            if(psum==k)
            {
                count++;
            }

            if(sMap.find(psum-k) != sMap.end())
            {
                count++;
            }
            if(sMap.find(psum)==sMap.end())
            {
                sMap[psum]=i;
            }
        }
        return count;*/

        int n = nums.size();
        int count=0;
        int sum =0;

        for(int i =0 ; i<n ; i++)
        {
            sum=0;
            for(int j =i ; j< n ;j++)
            {
                sum=sum+nums[j];
                if(sum==k)count++;
            }
        }

        return count;
    }
};