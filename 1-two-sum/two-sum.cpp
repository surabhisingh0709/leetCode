class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
       int right = nums.size()-1;
       int left =0;
       int sum=0;
       vector<pair<int,int>> indexing;
       for (int i =0 ; i<nums.size() ; i++)
       {
            indexing.push_back({nums[i],i});
       }
       sort(indexing.begin() ,indexing.end() );
       while(left<right){
       sum = indexing[left].first + indexing[right].first ;
        if(sum == target)
        {
            return {indexing[left].second,indexing[right].second};
        }
        if(sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }

       }
       return{};
    }
    
};
