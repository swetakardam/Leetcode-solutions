class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                ch.push(c);
            } else {
                if (ch.empty()) {
                    return false;
                }
                
                if ((c == ')' && ch.top() == '(') ||
                    (c == '}' && ch.top() == '{') ||
                    (c == ']' && ch.top() == '[')) {
                    ch.pop();
                } else {
                    return false;
                }
            }
        }
        
        return ch.empty();
    }
};
