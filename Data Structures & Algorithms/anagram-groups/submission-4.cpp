class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string, vector<std::string>> mp;
        
        std::vector<vector<std::string>> v;
        
        for (int i = 0; i < strs.size(); i++) {

            std::vector<int> alph(26,0);

            std::string s = "";

            for (char c : strs[i]) {

                alph[c-'a'] = alph[c-'a'] + 1;
            }

            

            for (int x : alph) {
                s += std::to_string(x) + "#";
            }

            mp[s].push_back(strs[i]);
        }

        for (auto val : mp) {
            for (auto x : mp[val.first]) {

                std::cout<< val.first << " " << x << endl; 
            }
        }
        
        for (auto p : mp) {
            v.push_back(p.second);
        }

        return v;
        
    }
};
