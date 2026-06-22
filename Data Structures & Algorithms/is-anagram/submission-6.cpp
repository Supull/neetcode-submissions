class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() == t.length()) {
            
            std::vector<int> x(26,0);

            for (int i = 0; i< s.length(); i++) {
                x[s[i]-'a'] = x[s[i]-'a'] + 1;
                x[t[i]-'a'] = x[t[i]-'a'] - 1;
            }

            for (int val : x) {
                if (val != 0) {
                    return false;
                }
            }

            return true;

        } else {

            return false;
        }
    }
};
