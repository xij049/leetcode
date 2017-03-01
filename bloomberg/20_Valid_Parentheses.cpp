
/** 20. Valid Parentheses

* Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

* The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

*/

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if (n == 0) return true;
        stack<char> p;
        p.push(s[0]);
        
        for (int i = 1; i < s.length(); i++) {
            char top;
            if (!p.empty()){
                top = p.top();
            }
            else {
                p.push(s[i]);
                continue;
            }
            if (s[i] == ')') {
                if (top == '('){
                    p.pop();
                    continue;
                }
            } else if (s[i] == ']'){
                if (top == '['){
                    p.pop();
                    continue;
                }
            } else if (s[i] == '}'){
                if (top == '{'){
                    p.pop();
                    continue;
                }
            }

            p.push(s[i]);
        }
        
        if (p.empty())
            return true;
        else
            return false;
        
    }
};