class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        /*this does not work because order changes when we swap
        dutch national flag not valid when to preserve order
        int n = nums.size();
        int low=0;
        int mid=0;
        int high = n-1;

        while(mid<=high)
        {
            if(nums[mid]<pivot)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==pivot)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        return nums;
        */

        vector<int> ans;

        // first pass: < pivot
        for(int x : nums)
            if(x < pivot) ans.push_back(x);

        // second pass: == pivot
        for(int x : nums)
            if(x == pivot) ans.push_back(x);

        // third pass: > pivot
        for(int x : nums)
            if(x > pivot) ans.push_back(x);

        return ans;
    


    }
};