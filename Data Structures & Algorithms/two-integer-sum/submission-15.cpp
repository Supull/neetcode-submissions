class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        std::unordered_map<int,int> mp;

        int difference;

        for (int i = 0; i < nums.size(); i++ ) {
            difference = target - nums[i];

            if (mp.count(difference)) {
                return {mp[difference], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
