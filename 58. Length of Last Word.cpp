class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream sss(s) ;
        string token; 
        vector<string> tokens ;
        while (getline(sss, token, ' ')) {
            if (token.length()>0) tokens.push_back(token);
        }
        
        return (tokens.size())? tokens[tokens.size()-1].length() : 0 ; 
    }
};