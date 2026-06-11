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
        if(s.length() != goal.length()) return false;

    //------optimal double string and check in it
        s = s+s;
        if(s.find(goal) < s.length()) return true;
        else return false;




    //------brute rotate each time and search for target in it
        /*for(int i =0 ; i< n ; i++)
        {
            if(s==goal) return true;
            else
            {
                s = rotate(s,n);
                //or use rotated = s.substr(i) + s.substr(0,i) to get rotated string
            }
        }
        return false;*/


    }
};