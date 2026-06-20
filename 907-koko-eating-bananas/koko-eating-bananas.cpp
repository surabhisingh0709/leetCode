class Solution {
public:

    double minEatingSpeed(vector<int>& piles, int h) {

        int low =1;
        int high = *max_element(piles.begin() , piles.end());
        int ans =-1;

        while(low<=high)
        {
            int mid = low + (high - low)/2;

            long long total =0;
            for(int i =0 ; i< piles.size() ; i++)
            {
                total = total + ceil((double)piles[i]/mid);
            }

            if(total<=h) 
            {
                ans =mid;
                high = mid-1;
            }
            else 
            {
                low = mid+1;
            }        
        }
        
        return ans;




    //--------brute linearly calculating total and return min k 
       /* double max = *max_element(piles.begin() , piles.end());

        for(double k = 1; k<=max ; k++)
        {
            double total=0;
            for(int i =0 ; i< piles.size() ; i++)
            {
                int val = piles[i]/k;
                if(piles[i] % k ==0) total = total+ ceil(val);
                else total = total + piles[i]/k + 1;
            }
            if(total<=h) return k ;
        }
        return -1;*/
        
    }
};