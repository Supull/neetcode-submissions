class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int val : nums) {
            if (numSet.find(val-1) == numSet.end()) {
                int length = 1;
                while (numSet.find(val+length) != numSet.end()) {

                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
        
    } 
};
