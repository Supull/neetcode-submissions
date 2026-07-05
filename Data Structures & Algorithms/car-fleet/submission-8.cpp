class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        double rd = 0;
        double rs = 0;

        vector<pair<double, double>> v;
        unordered_map<double,int> mp; 
        


        for (int i = 0; i < speed.size(); i++) {

            rd = target - position[i];
            rs = rd/speed[i];

            v.first.push_back(rs);
            v.second.push_back(position[i]);

        }

        for (int i = 0; i < speed.size(); i++) {

            cout << v.first[i] << "," << v.second[i];

        }

        for (auto val : v.first) {

            mp[val]++;

        }

        int count = 0;
        cout << endl;

        for (auto val : mp) {
            cout << val.first << " " << val.second << "v ";
            count = count + 1;
        }

        return count;
        
    }
};
