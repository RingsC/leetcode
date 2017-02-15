class Solution {
public:
    int getSum(int a, int b) {
        int sum =  a; 
        int carrier = b  ;
        
        while (carrier) {
            int tmps = sum ; 
            sum = tmps ^ carrier;
            carrier = (tmps & carrier) << 1 ;
        }
        
        return sum ;
    }
};