class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded_string = "";

        for (auto val : strs) {
            
            std::string num = std::to_string(val.size());
            encoded_string = encoded_string + val + num;
             
            
        }

       
        std::cout << encoded_string <<" e";
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
                if (((index and x) == 0) and s.size() == 1) {
                    std::string b(1, val);
                    v.push_back("");
                } else if (x==0) {
                    v.push_back("");
                    index = 0;
                    conc = "";
                } else {
                    v.push_back(conc);
                    index = 0;
                    conc = "";
                }
                
            } else {
                index = index + 1;
                conc = conc + val;
            }
        }
        return v;

    }
};
