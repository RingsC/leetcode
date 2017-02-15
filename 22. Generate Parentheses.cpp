class Solution {
public:
    void generatePar (vector<string>& res, string res_one, int left, int right) {
        if (left > right || left < 0) return ; 
        if (left ==0 && right == 0) 
            res.push_back (res_one) ;
        else {
            res_one += "(" ;
            generatePar (res, res_one, left  - 1 , right) ;
            res_one.pop_back();
            
            res_one+=")" ;
            generatePar (res, res_one, left , right -1) ;
            res_one.pop_back() ;
        }
            
    }
    vector<string> generateParenthesis(int n) {
        if (!n || n< 0 || n < 1) return vector<string>(); 
        
        vector<string> res; 
        string res_one ; 
        generatePar (res, res_one, n, n) ;
        return res; 
    }
};