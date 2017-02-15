class Solution {
public:
    string addStrings(string num1, string num2) {
        //here,we don't use a temp string, for memory using. extern mem O(1);
        int resultNo(0) ; //which no is longer, the longer one will hold result string.
        int minlen = (num1.length() > num2.length())? (resultNo =1,num2.length()): (resultNo=2, num1.length());
        int maxlen =(num1.length() > num2.length())? num1.length(): num2.length() ;

        int carrier (0), remainder(0), resultval(0); 
       
        int i,j;
        for ( i= maxlen -1, j = minlen-1 ; j>=0 ; i--, j--) {
            if (resultNo ==1)
                resultval = (num1[i]-'0') + (num2[j]-'0') + carrier ;
            else
                resultval = (num2[i]-'0') + (num1[j]-'0') + carrier ;
            carrier = resultval / 10;
            remainder = resultval % 10;

            (resultNo==1)? (num1[i] = remainder +'0'): (num2[i] = remainder +'0') ;
        }
        
        while (i>=0) {//the left 
            if (resultNo ==1) {
                resultval =  num1[i] - '0' + carrier ;        
                carrier = resultval / 10;
                remainder = resultval % 10;
                num1 [i] = remainder + '0' ;            
            } else {
                resultval =  num2[i] - '0' + carrier ;        
                carrier = resultval / 10;
                remainder = resultval % 10;
                num2 [i] = remainder + '0' ;              
            }
            i -- ;
        }
        
        string s;
        s =(carrier)? "1":"" ;
        return (resultNo ==1)? ( s + num1): (s + num2);
    }
};