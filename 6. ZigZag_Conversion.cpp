class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <=1) return s; 
        
        string res; 
        string* str = new string[numRows] ;
        
        int row =0, step =1 ; 
        for (int i =0; i< s.length(); i++) {
            str[row].push_back (s[i]) ;
            
            if (row ==0) 
                step =1 ;
            else if (row  == numRows -1 )
                step = -1;
            row += step; 
        }
        
        
        for (int i =0; i< numRows; i++) {
            res+= str[i];
        }
        
        delete[] str; 
        
        return res; 
    }
};