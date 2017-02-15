class Solution {
public:
    int longestPalindrome(string s) {
        int counts[52];
        int a = 0;
        bool b = false;
        memset(counts, 0, 52*sizeof(int));
        int i=0;
        int ch;
        int index;
        while( (ch = s[i]) != 0 ){
            index = (ch<'a')?(ch-'A'):(ch-'a'+26);
            counts[index] += 1;
            i++;
        }
        for(int i=0; i<52; i++){
            if(counts[i]%2==0) a+=counts[i];
            else{ a+=counts[i]-1; b = true; }
        }
        return a+b;        
    }
};