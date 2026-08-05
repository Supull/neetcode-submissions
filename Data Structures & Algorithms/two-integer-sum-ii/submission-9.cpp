class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int left = 0;
        int right = numbers.size()-1;

        

            while (i < right) {

                if (target == numbers[i] + numbers[right]) {
                    return {i+1, right+1};
                } else {
                    cout << numbers[i] << " " << numbers[right] << endl;
                    right--;
                    
                }
            }

            
        

        return {};
    }
};
