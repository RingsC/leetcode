class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.length() != t.length()) return false;

        multiset<char> tset(t.begin(), t.end()) ;
        for (int i=0; i< s.length(); i++){
            multiset<char>::const_iterator cit = tset.find(s[i]) ;
            if (cit != tset.end())
                tset.erase (cit) ;
            else
                return false;
        }
        return tset.size()? false: true; 
    }
};