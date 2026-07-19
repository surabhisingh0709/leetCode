class Solution {
public:
    int repeatedStringMatch(string a, string b) {  
        string temp =a;
        int ans=1; 
        while(a.length() < b.length())
        {
            a +=temp;
            ans++;
        }

        if((a.find(b)) != string::npos) return ans;

        a+=temp;
        ans++;
        if((a.find(b)) != string::npos) return ans;

        return -1;
    }

};