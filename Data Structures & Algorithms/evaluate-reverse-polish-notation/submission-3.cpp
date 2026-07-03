class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s1;
        stack<int> s2;

        int total = 0;

        for (auto val : tokens) {

            if ((val == "+" || val == "*" || val == "/" || val == "-") && s1.size() >= 2) {
                if (val == "+") {
                    total = 0;
                    total = s1.top() + total;
                    s1.pop();
                    total = s1.top() + total;
                    s1.pop();
                    
                }
                else if (val == "-") {
                    total = 0;
                    total = s1.top() - total;
                    s1.pop();
                    total = s1.top() - total;
                    s1.pop();
                    
                }
                else if (val == "/") {
                    total = 1;
                    total = s1.top() / total;
                    s1.pop();
                    total = s1.top() / total;
                    s1.pop();
                }
                else if (val == "*") {
                    total = 1;
                    total = s1.top() * total;
                    s1.pop();
                    total = s1.top() * total;
                    s1.pop();
                    
                }

                s1.push(total);
                
                cout << s1.top();

            } else {

                int x = stoi(val);
                s1.push(x);
            }


        }

        return s1.top();


        
    }
};
