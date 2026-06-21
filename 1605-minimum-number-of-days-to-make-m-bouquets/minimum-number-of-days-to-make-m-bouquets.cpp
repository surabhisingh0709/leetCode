class Solution {
public:

    int numBq(vector<int>& bloomDay, int mid, int k)
    {
        int cons=0;
        int total =0 ;
        for(int i =0 ; i< bloomDay.size() ; i++)
        {
            if(bloomDay[i] <= mid) cons++;
            else
            {
                total += cons/k;
                cons=0;
            }

        }
        total += cons/k;
        return total;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if((long long)m*k > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());

        int ans =high;
        
        while(low<=high)
        {
            int mid = low + ( high - low)/2;
            int num = numBq(bloomDay , mid , k);

            if(num >= m) 
            {
                ans = mid;
                high= mid-1;
            }
            else low = mid+1;
        }
        return ans;
        
    }
};