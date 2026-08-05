class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int left = 0;
        int right = numbers.size()-1;

            while (left < right) {

                if (target == numbers[left] + numbers[right]) {
                    return {left+1, right+1};
                } else {
                    
                    if (numbers[left] + numbers[right] < target) {
                        cout << numbers[left] << " " << numbers[right] << endl;
                        left++;
                        
                    } else {
                        cout << numbers[left] << " " << numbers[right] << endl;
                        right--;
                    }
                    
                }
            }

            
        

        return {};
    }
};
