class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        double rd = 0;
        double rs = 0;

        vector<double> v;
        unordered_map<double,int> mp; 


        for (int i = 0; i < speed.size(); i++) {

            rd = target - position[i];
            rs = rd/speed[i];

            v.push_back(rs);

        }

        for (auto val : v) {

            cout << val << " ";
        }

        for (auto val : v) {

            mp[val]++;

        }

        int count = 0;
        cout << endl;

        for (auto val : mp) {
            cout << val.first << " " << val.second << " ";
            count = count + 1;
        }

        return count;
        
    }
};
