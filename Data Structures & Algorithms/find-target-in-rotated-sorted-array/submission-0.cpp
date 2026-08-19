class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size() - 1;
        int m = 0;

        while ( l < r) {

            m = l + (r - l)/2;

            if (nums[m] == target) {
                return m;

            } else if (nums[m] > target && nums[m] > nums[l] && nums[l] > target) {

                l = m;

            } else if (nums[m] > target && nums[m] > nums[l] && nums[l] <= target) {

                r = m - 1;

            } else if (nums[m] < target && nums[m] > nums[l] && nums[l] > target) {

                r = m + 1;

            } else if (nums[m] < target && nums[m] > nums[l] && nums[l] <= target) {

                l = m;

            }
            
            if (nums[l] <= nums[m]) {
                if (target >= nums[l] && target < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                if (target > nums[m] && target <= nums[r]) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }

        return -1;
        
    }
};
