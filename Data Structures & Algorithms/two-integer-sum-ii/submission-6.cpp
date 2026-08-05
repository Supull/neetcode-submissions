class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int left = 0;
        int right = numbers.size()-1;

        for (int i = 0; i < numbers.size(); i++) {

            while (i < right) {

                if (target == numbers[i] + numbers[right]) {
                    return {i+1, right+1};
                } else {
                    right--;
                    cout << numbers[i] << " " << numbers[right] << endl;
                }
            }
        }

        return {};
    }
};
