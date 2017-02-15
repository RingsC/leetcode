// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int  max(0), min (0);
        max = n ; 
        min = 1 ; 
        while (1) {
            int mean = (max - min) /2 + min ;
            int guesres  = guess (mean) ;
            if (guesres == 0 ) return mean ; 
            else if (guesres ==-1) {
                max = mean -1; 
            } else if (guesres == 1) {
                min = mean +1;
            }
        }
    }
};