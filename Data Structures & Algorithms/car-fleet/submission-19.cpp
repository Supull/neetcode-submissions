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
        sort(v.begin(), v.end());
        for (int i = 0; i < speed.size(); i++) {

            cout << v[i].first << "," << v[i].second << " ";

        }

        for (auto val : v) {

            mp[val.first]++;

        }
        int count = speed.size();
        cout << endl;

        if (position.size() == 1) {
            return 1;
        }

        for (int i = 0; i < speed.size()-1; i++) {

            if (v[i].first == v[i+1].first) {
                count = count - 1;
            } else if (v[i].first > v[i+1].first && v[i].second < v[i+1].second) {
                count = count - 1;
            }
        }

        

        

        return count;
        
    }
};
