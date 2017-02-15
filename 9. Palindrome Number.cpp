class Solution {
public:
    bool isPalindrome(int x) {
        if (x <= INT_MIN || x >= INT_MAX)
            return false ;
            
        if (x < 0) 
            return false; 
            
        int width (1); 
        int base =1;
        int N = x; 
        while (N /10 > 0) {
            width ++ ;
            base*=10;
            N = N/ 10;
        }
    
        int xx (x), xxx(x); 
        for (int i = 0; i < width/2 ; i++) {
            if ( xx / base == xxx % 10)  {
                xx  %=base ;
                base /=10;
                xxx /= 10; 
            } else 
                return false;  //https://leetcode.com/submissions/detail/85331493/
        } 
        
        return true; 
    }
};