class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        if (nums.size() == 2) {
            if ((nums[0] + nums[1]) == target) {
                return {0,1};
            }
        } else {
            
            std::vector<int> x(nums.size(), 0);
            x[0] = nums[0];
            for (int i = 1; i<nums.size(); i++) {
                x[i] = x[i-1] + nums[i];
            }

            std::unordered_map<int, int> mp;

            int difference;
            int find;

            for (int i = 0; i < x.size()-1; i++) {
                difference = x[i+1] - x[i];
                mp[difference] = i+1;
            }

            for (int val : x) {
                std::cout << val <<" " <<;
            }

            std::cout << endl;
            for (auto p : mp) {
                std::cout << p.first << " " << p.second << std::endl;
            }
            
            for (int i = 0; i < nums.size(); i++) {
                find = target - nums[i];
                if (mp.count(find)) {
                    return {i, mp[find]};
                }
            }
        }

        return {};
    }
};
