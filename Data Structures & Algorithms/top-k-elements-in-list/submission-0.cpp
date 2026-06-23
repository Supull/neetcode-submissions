class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> mp;
        std::vector<int> v;

        for (int i = 0; i < nums.size(); i ++) {
            mp[nums[i]]++;

        }

        for (auto val : mp) {

            std::cout << val.first << " " << val.second << endl;
        }
        
        for (int i = 0; i < k; i ++) {
            int highest = 0;
            int highestindex = 0;
            for (auto val : mp) {
                if (val.second > highest) {
                    highest = val.second;
                    highestindex = val.first;
                }

            }

            mp[highestindex] = 0;
            v.push_back(highestindex);



        }
        return v;
    }
};
