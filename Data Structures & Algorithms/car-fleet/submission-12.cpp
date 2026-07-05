class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        double rd = 0;
        double rs = 0;

        vector<pair<double, double>> v(position.size());
        unordered_map<double,int> mp; 
        


        for (int i = 0; i < speed.size(); i++) {

            rd = target - position[i];
            rs = rd/speed[i];

            v[i].first = rs;
            v[i].second = position[i];

        }

        for (int i = 0; i < speed.size(); i++) {

            cout << v[i].first << "," << v[i].second << " ";

        }

        for (auto val : v) {

            mp[val.first]++;

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
