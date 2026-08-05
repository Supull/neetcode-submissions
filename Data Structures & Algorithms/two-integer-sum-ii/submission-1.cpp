class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int left = 0;
        int right = numbers.size()-1;

        while (left < right) {

            if (target == numbers[left] + numbers[right]) {
                return {numbers[left], numbers[right]};
            } else {
                right--;
            }
        }

        return 0;
    }
};
