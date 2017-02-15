class Solution {
public:
    string addBinary(string a, string b) {
        if (a.length() ==0) return b; 
        else if (b.length() ==0) return a ; 
        else if (a.length()==0 && b.length()==0) return "";
        else ; 
        
        int m = a.length()-1; 
        int n = b.length()-1;
        
        string result; 
        int carrier (0), remainder(0);
        while (m>=0 && n>=0) {
            int res = (a[m] -'0') + (b[n] -'0') + carrier ;
            carrier = res / 2;
            remainder = res % 2; 
            
            result += (remainder + '0') ;
            m --;
            n --;
        }
                
        while (m>=0) {
            int res = (a[m] -'0') + carrier ;
            carrier = res / 2;
            remainder = res % 2; 
            
            result += (remainder + '0') ;
            m --;
            n --;
        }
        while (n>=0) {
            int res = (b[n] -'0') + carrier ;
            carrier = res / 2;
            remainder = res % 2; 
            
            result += (remainder + '0') ;
            m --;
            n --;
        }
        if (carrier) {
            result +='1' ;
        }
        
        string tmp(result.rbegin(), result.rend()) ;
        return tmp; 
    }
};