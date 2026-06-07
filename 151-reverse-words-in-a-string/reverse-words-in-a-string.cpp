class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word= "";

        //go char by char and when space comes store the word in list 
        for(int i =0 ; i< s.length() ; i++)
        {
            if(s[i] != ' ') word += s[i];

            else //space 
            {
                if(word.length()>0)
                {
                    words.push_back(word);
                    word = "";
                } 
            }

        }

        //to put last word in list bcoz it may have not a space after it to push in list 
        if(word.length()>0)
                {
                    words.push_back(word);
                    word = "";
                } 
            
        

        reverse(words.begin(), words.end());
        string result;

        for(int i =0 ; i< words.size() ; i++)
        {
            result += words[i];

            //add space if not last word
            if(i!=words.size()-1) result += " ";

        }

        return result;














        //first approach both space and tie O(N)
        /*int n = s.length();

        // 1️ Reverse entire string
        reverse(s.begin(), s.end());

        //  Reverse each word
        int left = 0;
        for (int right = 0; right <= n; right++) {
            if (right == n || s[right] == ' ') {
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1;
            }
        }

        // Remove extra spaces
        int i = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] != ' ') {
                if (i > 0) s[i++] = ' ';
                while (j < n && s[j] != ' ')
                    s[i++] = s[j++];
            }
        }

        s.resize(i);
        return s;*/
        
    }
};
