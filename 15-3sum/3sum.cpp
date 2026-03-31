class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        int i,j,k;
        sort(nums.begin(), nums.end());
        //Optimal approach without using set data structure to filter duplicates 
        for(int i =0 ; i< n ; i++)
        {   if(i>0 && nums[i]==nums[i-1] )continue; //if equals to previous then gives same triplet so skip
            j=i+1;
            k=n-1;
            while( j < k)
            {
                int sum =nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;

                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            
            }
        }
        return ans;







        //better approach using hashing and using set data structure to filter duplicates 
        /*map<int,int>hash;
        set<vector<int>>st;
        for(int i =0 ; i< n ; i++)
        {
            for(int j =i+1 ; j<n ; j++)
            {
                int more = -(nums[i]+nums[j]);
                if( hash.find(more) != hash.end())//more found in hash 
                {
                    vector<int>temp = {nums[i] , nums[j] , more};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash[nums[i]] =i;
            }
            hash.empty();
        }

        vector<vector<int>>ans(st.begin() , st.end());
        return ans;*/


        /* brute O(n cube)
        set<vector<int>>st;
        for(int i =0 ; i< n ; i++)
        {
            for(int j =i+1 ; j< n ; j++)
            {
                for(int k = j+1 ; k< n ;k ++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int>temp = {nums[i], nums[j] , nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());

        return ans;*/
    }
};