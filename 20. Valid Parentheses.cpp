class Solution {
public:
    bool isValid(string s) {
        stack<char> parents; 
        for (int i =0; i < s.length(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') 
                parents.push (s[i]); 
            if (s[i] == '}' || s[i] == ')' || s[i] == ']') {
                if (parents.size() ==0) return false; 
                
                if ((s[i] =='}' && parents.top() == '{') || (s[i] ==')' && parents.top() == '(') || (s[i] ==']' && parents.top() == '[')) 
                    parents.pop ();
                else
                    return false; 
            }
        }
        
        return (parents.size())? false : true; 
    }
};