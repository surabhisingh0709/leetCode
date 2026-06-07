class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int left=0;
        int right=0 ; 
        int left_cnt=0;
        int right_cnt=0;


        for(int i =0 ; i< s.length() ; i++)
        {
            if(s[i]=='(') left_cnt++;
            else right_cnt++;

            if(left_cnt == right_cnt)
            {
                right=i;
                ans += s.substr(left+1 , left_cnt*2 -2);
                left_cnt=0;
                right_cnt=0;
                left = i+1;
                right=i+1;
            }
        }

        return ans;
        
    }
};