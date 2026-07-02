class Solution {
public:
    bool isValid(string s) {

        stack<char> s2;

        for (auto x : s) {
            if (x == '(' || x == '{' || x == '[') {
                s2.push(x);
            } else {
                if (!s2.empty()) s2.pop();
            }


        }

    

        if (s2.empty()) {
            return true;
        } else {
            return false;
        }

        
    }
};
