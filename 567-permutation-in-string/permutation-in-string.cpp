class Solution {
public:

    bool isEqual(int arr1[] , int arr2[] )
    {
        bool ans=true;

        for(int i =0 ; i< 26 ; i++)
        {
            if(arr1[i] != arr2[i])
            {
                ans=false;
                break;
            }
        }

        return ans;
    }

    bool checkInclusion(string s1, string s2) {
       
        int freq[26]={0};

        //storing char count in freq array
        for(int i =0 ; i<s1.length(); i++)
        {
            freq[s1[i] - 'a']++;
        }

        //search windows in s2 with same word frequency and window size same as s1 length
        int wid_start=0;
        int wid_end = s1.length()-1;

        while(wid_end != s2.length() && s2.length() >= s1.length())
        {
            //for every window
            int wid_freq[26]={0};
            for(int i =wid_start ; i<=wid_end; i++)
            {
                wid_freq[s2[i] - 'a']++;
            }

            if(isEqual(freq, wid_freq)) return true;
            else
            {
                wid_start++;
                wid_end++;
            }         
        }
        return false;

        
    }
};