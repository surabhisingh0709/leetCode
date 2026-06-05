class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();
        int left =0 ;
        int right = length-1;
        bool ans=true;

        while(left<right)
        {
            if(!isalnum(s[left]))
            {
                left++;
                continue;
            }
            else if(!isalnum(s[right]))
            {
                right--;
                continue;
            }
            else if(tolower(s[left]) != tolower(s[right]))
            {
                ans=false;
                break;
            }
            right--;
            left++;


        }
        return ans;












        /*int start=0;
        int end = s.length() -1;
        while(start<end)
        {
            if(!isalnum(s[start]))
            {
                start++;
                continue;
            }
            if(!isalnum(s[end]))
            {
                end--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;*/

    }
};