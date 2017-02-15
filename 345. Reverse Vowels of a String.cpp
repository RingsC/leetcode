class Solution {
public:
    string reverseVowels(string s) {
        if (!s.length()) return s; 
        
        map<int, char> vowels ;
        for (int i =0; i <s.length(); i++) {
            char chr = tolower (s[i]) ;
            
            if (chr== 'a' || chr =='e' || chr =='i' || chr=='o' || chr=='u') {
                vowels.insert (make_pair(i, s[i])) ;    
            }
            
        }//
        if (!vowels.size()) return s; 
        
        int mid = vowels.size() /2 ;
        map<int, char>::const_iterator cit = vowels.begin() ;
        map<int, char>::reverse_iterator rcit = vowels.rbegin ();
        for (int j=0; j<= mid; j++) { //travel.
            s[(*cit).first] = (*rcit).second ;
            s[(*rcit).first] = (*cit).second;
            cit++; //https://leetcode.com/submissions/detail/84977465/
            rcit ++ ;
        }
        return s; 
    }
};