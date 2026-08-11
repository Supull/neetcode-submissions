class Solution {
public:
    int search(vector<int>& nums, int target) {

        while ( l <= r) {

            int m = l + (r-l)/2;

            if (num[m] == target) {
                return m;
            } else if (num[m] > target) {

                l = m + 1;
            } else if (num[m] < target) {

                r = m -1;
            }

        }
        
    }
};
