class Solution {
public:
    char hexchar[16] ={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'} ;
    int getcharVal (char character) {
        if ('0' <= character && character <='9') // isdigital
            return character - '0' ;
        else
            return character - 'a' + 10;        
    }
    string toHex(int num) {
        
        if (num ==0) return "0" ;
        if (num ==-1) return "ffffffff" ;
        if (num == -INT_MIN) return "80000000" ; 
        
        string result ; 
        int baseN = 16;
        int tmpValue = abs (num) ;
        while (tmpValue / baseN >0 ) {
                result += hexchar [tmpValue % baseN] ;
                tmpValue = tmpValue / baseN ;
        }
        result += hexchar[tmpValue % baseN] ;
        result.assign(result.rbegin(), result.rend()) ;
        
        if (num < 0) { //negative value:(1)calc the complementary code in hex style;(2) ccode +1; (3) result
            for (int i= result.length() -1, j=0; i >=0; j++,i--) { // comlementary code.
                result[result.length()-j -1] = hexchar [15 - getcharVal(result[i])] ; 
            }

            int carrier(0) ;  //ccode +1
            int charval = getcharVal(result[result.length()-1]) +1 ;
            if ( charval >= 16) {//the first char +1 at tail.
                result[result.length()-1]='0';
                carrier =1;
            } else{
                result[result.length()-1]= hexchar [charval];
                carrier =0;
            }            
            for (int i= result.length()-2, j=0; i >=0; j++,i--) { //complementary code plus one. the rest of chars.
                int charv = getcharVal(result[i]) + carrier;
                if (charv>= 16) {
                    carrier =1;
                }else{
                    carrier =0;
                }
                result[i] = hexchar[charv] ;   
            }
            string tmp(8-result.length(),'f') ;
            result = (carrier)? "1"+result: ""+result; 
            result = tmp + result;
        }
        return result;
    }
};