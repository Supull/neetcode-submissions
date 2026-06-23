class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded_string = "";

        for (auto val : strs) {
            
            std::string num = std::to_string(val.size());
            encoded_string = encoded_string + val + num;
             
            
        }

       

        return encoded_string;
        
    }

    vector<string> decode(std::string s) {

        vector<std::string> v;

        int index = 0;
        std::string conc = "";

        for (auto val : s) {
            
            int x = val - '0';
            std::cout << x << " ";
            if ((x) == index) {
                
                v.push_back(conc);
                index = 0;
                conc = "";
            } else {
                index = index + 1;
                conc = conc + val;
            }
        }
        return v;

    }
};
