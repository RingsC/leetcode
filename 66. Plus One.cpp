class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        std::vector <int> tmpResult ; 
        std::vector<int> restk; 
        int length = digits.size ();
    
        int carrier(0), remainder(0), resultval(0) ;    
        for (int i = length -1; i>=0; i--) {
            resultval = (i==length -1)? (digits[i] + carrier +1) : (digits[i] + carrier);       
            remainder = resultval % 10;
            carrier = resultval / 10 ;
            restk.push_back (remainder) ;
        }
        if (carrier) 
            restk.push_back(carrier) ;
        for (int i= restk.size() -1; i>=0; i--)
            tmpResult.push_back(restk[i]) ;
        
        return tmpResult; 
    }
};