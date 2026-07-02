
class Solution {
public:
    bool isValid(string s) {

        stack<char> s2;

        for (char x : s) {
        if (x == '(' || x == '[' || x == '{') {
            s2.push(x);
        }
        else {
            if (!s2.empty() &&
            ((x == ')' && s2.top() == '(') ||
                (x == ']' && s2.top() == '[') ||
                (x == '}' && s2.top() == '{'))) {
                s2.pop();
            }
        }
    }

    

        if (s2.empty()) {
            return true;
        } else {
            return false;
        }

        
    }
};
