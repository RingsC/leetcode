class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num == INT_MIN) return false; 
        if (num < 0) return false; 
        num  = abs (num) ;
        int base = 4; 
        while (num / base >0) {
            if ( num % base != 0) return false ;
            num = num / base;
        }
        
        return (num != 1)? false : true; 
        
    }
};