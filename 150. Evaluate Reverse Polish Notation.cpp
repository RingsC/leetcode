class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> result; 
        for (int i =0; i< tokens.size(); i++) {
            int res = atoi(tokens[i].c_str()) ;
            if (tokens[i] =="0" || res !=0) {
                 result.push(res) ;
            } else {
                int b = result.top() ;
                result.pop ();
                int a = result.top() ;
                result.pop();
    
                if ( tokens[i] == "+") {
                    result.push (a + b) ;
                } else if (tokens[i] == "-") 
                    result.push (a-b) ;
                else if (tokens[i] == "*")
                    result.push (a*b) ;
                else if (tokens[i] == "/")
                    result.push (a/b) ;
            }
        }
        return result.top();
    }
};