class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int low = 0, high = nums.size() - 1;
        vector<int>ans;
        

        auto it = lower_bound(nums.begin() , nums.end(), target);    
        auto itt = upper_bound(nums.begin() , nums.end() , target) ;
        

        if (it == itt) 
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            first = it - nums.begin();
            ans.push_back(first);
            last = itt - nums.begin()-1;
            ans.push_back(last);
        }
        
        return ans;































        /*// Find first occurrence
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                first = mid;
                high = mid - 1; // keep searching on left side
            }
        }
        
        low = 0;
        high = nums.size() - 1;
        
        // Find last occurrence
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                last = mid;
                low = mid + 1; // keep searching on right side
            }
        }
        
        return {first, last};*/
    }
};
