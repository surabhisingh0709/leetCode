class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int cnt=0 ;
        int n = strs.size();

        sort(strs.begin() , strs.end());

        for(int i =0 ; i< strs[0].length() ; i++)
        {
            if(strs[0][i] == strs[n-1][i])
            {
                ans += strs[0][i];
            }
            else break;
        }
        return ans;

    //------brute
        /*for(int j =0 ; j < strs[0].length(); j++)
        {
            cnt=0;
            char ch = strs[0][j];
            for(int i =0 ; i < strs.size(); i++)
            {
                if(ch == strs[i][j])cnt++;   
            }

            if(cnt == strs.size()) 
            {
                ans += ch;
            }
            else break;
        }

        return ans;*/
        
        
    }
};