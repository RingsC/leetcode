class Solution {
public:
    char findTheDifference(string s, string t) {
        if (t.length() ==0) return ' ';
        
        multiset<char> charset(t.begin(), t.end());
        for (int i=0; i < s.length(); i++) {
            std::multiset<char>::const_iterator cit = charset.find (s[i]);
            if (cit != charset.end())
                charset.erase (cit) ;
        }
        if (charset.size()>1) return ' ' ;
        else
            return *charset.begin();
    }
};