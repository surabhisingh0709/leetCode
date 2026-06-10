class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int cnt=0 ;

        for(int j =0 ; j < strs[0].length(); j++)
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

        return ans;
        
        
    }
};