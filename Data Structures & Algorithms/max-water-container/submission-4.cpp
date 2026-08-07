class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int res = 0;

        while (left < right) {

            cout << heights[left] << " " << heights[right] << endl;
            int area = min(heights[left], heights[right]) * (right - left);
            res = max(res, area);

            while (left < right && heights[left] < heights[left+1]) {
                left++;
            }
            cout << heights[left] << " " << heights[right] << endl;

            area = min(heights[left], heights[right]) * (right - left);
            res = max(res, area);

            while (left < right && heights[right] < heights[right-1]) {
                right--;
            }
            cout << heights[left] << " " << heights[right] << endl;

            area = min(heights[left], heights[right]) * (right - left);
            res = max(res, area);

            left++;
            right--;
        }
        return res;
    }
};