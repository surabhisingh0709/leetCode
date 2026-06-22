class Solution {
public:

    static bool cmp(pair<char,int>a , pair<char,int>b)
    {
        return a.second>b.second;
    }

    string frequencySort(string s) {
    
    //--------bucket sort
        unordered_map<char,int> freq;
        int n = s.length();

        for(int i =0 ; i< s.length() ; i++)
        {
            freq[s[i]]++;
        }

        vector<string>bucket(n+1);

        for(auto it:freq)
        {
            char ch = it.first;
            int f = it.second;
            bucket[f] += ch;
        }

        string ans="";

        for(int f = n; f >= 1; f--)
        {
            for(char ch : bucket[f])
            {
                ans.append(f, ch);
            }
        }
        return ans;




    //--------map + sort
       /* unordered_map<char,int> freq;

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

        return ans;*/
     
    }
};