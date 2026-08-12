class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int l = 0;
        int r = matrix.size() - 1;

        while (l<=r) {
            int m = l + (r - l)/2;

            int ls = 0;
            int rs = matrix[m].size() - 1;
            

            while (ls <= rs) {
                int ms = ls + (rs - ls)/2;
                if (matrix[m][ms] == target) {
                    return true;
                } else if (matrix[m][ms] > target) {
                    rs = ms - 1;
                    r = m;
                    if (rs < 0) {
                        r = m -1;
                        break;
                    }
                } else if (matrix[m][ms] < target) {
                    ls = ms + 1;
                    l = m;
                    if (ls > matrix[m].size() - 1) {
                        l = m + 1;
                        break;
                    }
                } if (ls > rs) {
                    return false;
                }
            }
            
        } 
        
        return false;
       
        
    }
};
