class Solution {
public:
    int findMin(vector<int> &nums) {

        int res = nums[0];
        int l = 0;
        int r = nums.size() - 1;
        int m = 0;

        while (l<= r) {
            
            m = l + (r -l)/2;

            cout << nums[m] << " ";

            if (nums[m] - nums[l] == m - l) {
                l = m + 1;
                if (l >= r) {
                    break;
                }
                if (nums[l] < nums[m]) {
                    return nums[m];
                }
            } else {
                r = m - 1;

                if (l >= r) {
                    break;
                }
                if (nums[r] > nums[m]) {
                    return nums[m];
                }
            }
        }

        return nums[m];

        
        
    }
};
