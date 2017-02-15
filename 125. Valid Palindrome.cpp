class Solution {
public:
    bool isPalindrome(string s) {
        int hig = s.length() - 1 ;
        int low = 0;

        while (low <= hig) {
            if (!isalnum(s[low])) {
                low ++;
                continue; 
            }
            if (!isalnum(s[hig])) {
                hig --;
                continue; 
            }
        
            if (tolower(s[low]) == tolower(s[hig])) {
                low ++ ;
                hig --;
            } else
                return false; 
        }

        return true; 
    }
};