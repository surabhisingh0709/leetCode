class Solution {
public:
    void reverseS(vector<char>& s , int i, int n)
    {    
        if(i>=n/2) return;
        swap(s[i],s[n-i-1]);
        reverseS(s,i+1,n);   
    }
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        reverseS(s,0,n);
    }
};