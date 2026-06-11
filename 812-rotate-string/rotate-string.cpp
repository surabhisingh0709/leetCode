class Solution {
public:

    string rotate(string str , int n)
    {
        char temp = str[0];
        for(int i =0 ; i< n-1 ; i++)
        {
            str[i] = str[i+1];
        }
        str[n-1] = temp;
        return str;
    }

    bool rotateString(string s, string goal) {
        int n = s.length();

        for(int i =0 ; i< n ; i++)
        {
            if(s==goal) return true;
            else
            {
                s = rotate(s,n);
            }
        }
        return false;


    }
};