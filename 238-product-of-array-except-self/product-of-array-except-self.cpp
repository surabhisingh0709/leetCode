class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefixp=1;
        int suffixp=1;
        int n = nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        vector<int>ans(n);

        for(int i =0 ; i<n ; i++)
        {
            pre[i] = prefixp;
            prefixp=prefixp*nums[i];
            suf[n-i-1]=suffixp;
            suffixp=suffixp*nums[n-i-1];
        }

        for(int i =0 ; i<n ; i++)
        {
            ans[i]=pre[i]*suf[i];
        }
        return ans;
    }
};