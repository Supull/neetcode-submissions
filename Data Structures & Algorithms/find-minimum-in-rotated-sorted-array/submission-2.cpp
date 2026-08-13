class Solution {
public:
    int findMin(vector<int> &nums) {

        int res = nums[0];
        int l = 0;
        int r = nums.size() - 1;

        while (l<= r) {
            
            int m = l + (r -l)/2;

            if (nums[m] - nums[l] == m - l) {
                l = m + 1;
                if (nums[l] < nums[m]) {
                    return nums[l];
                }
            } else {
                r = m - 1;
                if (nums[r] > nums[m]) {
                    return nums[r];
                }
            }
        }

        return m;
        
    }
};
