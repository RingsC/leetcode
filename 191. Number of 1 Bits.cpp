class Solution {
public:
    int hammingWeight(uint32_t n) {
        if (n ==1)  return 1 ;
        
        uint32_t weight = 0x00000001 ;
        int count =0;
        while (weight) {
            if (weight & n) count ++ ;
            weight = (weight) << 1 ;
        }
        return count ;
    }
};