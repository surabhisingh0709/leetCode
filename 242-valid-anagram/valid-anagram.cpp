class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n!=m) return false;

        int a1[26] ={0};

        for(int i =0 ; i< n ;i++)
        {
            a1[s[i] - 'a']++;
            a1[t[i] - 'a']--;
        }

        for(int i =0 ; i<26 ; i++)
        {
            if(a1[i] != 0) return false;
        }
        return true;
    }
};