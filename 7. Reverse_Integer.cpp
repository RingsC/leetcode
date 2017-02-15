class Solution {
public:
    int reverse(int x) {
        int base = 10;
        int n = (x>=0)? x: (-1*x); 
    
        int remainder (0) ;
        long long result (0);
        while ( n / base >0) {
            remainder = n % 10 ;
            result = result* 10 + remainder; 
            n = n / base ;
        }
        result =result * 10 + n; 
        result = (x>=0)? result : (-1* result); 
        
        return (result > INT_MAX || result < INT_MIN)? 0 : result;
    }
};