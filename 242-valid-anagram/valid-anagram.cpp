class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n!=m) return false;

        int a1[26] ={0};
        int a2[26] ={0};

        for(int i =0 ; i< n ;i++)
        {
            a1[s[i] - 'a']++;
            a2[t[i] - 'a']++;
        }

        for(int i =0 ; i<26 ; i++)
        {
            if(a1[i] != a2[i]) return false;
        }
        return true;
    }
};