class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0;
        int rSum=0;

        int l=k-1;
        int n = cardPoints.size();
        int r = n-1;

        
        for(int i =0 ; i< k ; i++)
        {
            lSum += cardPoints[i];
        }
        int ans=lSum;

        for(int i =0 ; i<k ; i++)
        {
            lSum = lSum-cardPoints[l];
            l--;
            rSum= rSum + cardPoints[r];
            r--;
            ans = max(ans,lSum+rSum);
        }
        return ans;

    }
};