class Solution {
public:

    static bool cmp(pair<char,int> a, pair<char,int> b)
    {
        return a.second > b.second;
    }

    string frequencySort(string s) {

        unordered_map<char,int> freq;

        // Count frequencies
        for(char ch : s)
        {
            freq[ch]++;
        }

        // Store in vector of pairs
        vector<pair<char,int>> vec;

        for(auto it : freq)
        {
            vec.push_back({it.first, it.second});
        }

        // Sort by frequency descending
        sort(vec.begin(), vec.end(), cmp);

        // Build answer
        string ans = "";

        for(auto p : vec)
        {
            ans.append(p.second, p.first);
        }

        return ans;
    }
};