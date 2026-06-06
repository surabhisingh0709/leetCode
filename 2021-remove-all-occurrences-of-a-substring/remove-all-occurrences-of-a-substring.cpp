class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.find(part)<s.length())
        {
            s.erase(s.find(part) , part.length());
        }

        return s;



      










       /*int n = s.length();
       int p = part.length();
       while(s.find(part) <= n)
       {
        s.erase(s.find(part),p);
       }
       return s; */
    }
};