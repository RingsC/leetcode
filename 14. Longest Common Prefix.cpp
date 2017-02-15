class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result; 
        if (strs.size()==0) return result; 
        
        result = strs[0] ;
        for (int i = 0; i < strs[0].length(); i++ ){
            for (int j =0; j < strs.size(); j++) {
                if (strs[j][i] == strs[0][i]) continue;
                else {
                    result  = strs[0].substr (0, i) ;
                    return result; 
                }
            }    
        }
        
        return result ;
    }
};