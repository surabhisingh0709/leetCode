class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans =0;
        int n = s.length();
        int l=0;
        int r=0;
        vector<int>hash(256,0);

       /* while(r<n)
        {
            
            if(hash[s[r]] !=-1)
            
            {
                l = max(hash[s[r]]+1,l);
                
            }
            hash[s[r]]=r;
            ans = max(r-l+1,ans);
            
            r++;

        }
        return ans;*/
        int len=0;

        while(r<n)
        {
            while(hash[s[r]]!=0)
            {
                hash[s[l]]--;
                l++;
            }
            hash[s[r]]=1;
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;

        
    }
};