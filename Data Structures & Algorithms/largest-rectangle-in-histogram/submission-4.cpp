class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<pair<int,int>> s1;

        int index = 1;
        int area = 0;
        int counter = 0;

        for (int i = 0; i < heights.size(); i++) {
            counter = i;

            if (counter != heights.size()-1) {

                while (heights[i] <= heights[counter+1] && counter != heights.size()-1) {
                //cout << heights[counter+1] << " ";
                index = index + 1;
                counter = counter + 1;

                    if (counter == heights.size()-1) {
                        break;
                    }
                
                }

            }
            
            cout << endl;

            counter = i;

            if (counter != 0) {
                while (heights[i] <= heights[counter-1] && counter != 0) {
                //cout << heights[counter-1] << " ";
                index = index + 1;
                counter = counter - 1;
                    if (counter == 0) {
                        break;
                    }
                }
            }
            


            if (area < index * heights[i]) {
                area = index * heights[i];
            }

            //cout << "d" << " " << endl;

            index = 1;
            
        }

        return area;

        




        
    }
};
