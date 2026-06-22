class Solution {
public:

    static bool cmp(pair<char,int>a , pair<char,int>b)
    {
        return a.second>b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(int i =0 ; i< s.length() ; i++)
        {
            freq[s[i]]++;
        }

        vector<pair<char,int>> vec;

        for(auto it:freq)
        {
            vec.push_back({it.first , it.second});
        }

        sort(vec.begin() , vec.end() , cmp);

        string ans="";
        for(auto it:vec)
        {
            for(int i =0 ; i< it.second ; i++)
            {
                ans += it.first;
            }
        }

        return ans;
     
    }
};