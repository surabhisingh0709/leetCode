class Solution {
public:

    /*bool isPalindrome(string str)
    {
        int left=0 ;
        int right=str.length()-1;

        while(left<right)
        {
            if(str[left] == str[right])
            {
                left++;
                right--;
            }
            else return false;
        }
        return true;
    }*/

    string expand(string &s, int left, int right) {

        while(left >= 0 && right < s.length() &&
              s[left] == s[right]) {
            left--;
            right++;
        }

        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {
        
        string ans = "";

        for(int i = 0; i < s.length(); i++) {

            // Odd length palindrome
            string odd = expand(s, i, i);

            if(odd.length() > ans.length())
                ans = odd;

            // Even length palindrome
            string even = expand(s, i, i + 1);

            if(even.length() > ans.length())
                ans = even;
        }

        return ans;


    //--------BRUTE very slow as taking almost O(NCUBE) 
        /*
        for(int i =0 ; i<n ; i++ )
        {
            for(int j =n-1 ; j>= i; j--)
            {
                if(isPalindrome(s.substr(i,j-i+1)) && j-i+1>ans.length())
                {
                    ans = s.substr(i , j-i+1);
                }
            }
        }
        return ans;*/
    }
};