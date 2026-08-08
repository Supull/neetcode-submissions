class Solution {
public:
    int trap(vector<int>& height) {

        int l = 0;
        int m = 0;
        int templ = 0;
        int r = 1;
        int area = 0;
        bool status = false;

        while (l < height.size() && height[l] == 0) {
            l++;
            r++;
            
        }


        cout << height[l] << " " << height[r] << endl;

        while (r < height.size()) {

            if (height[l] > height[r]) {
                cout << height[l] << " " << height[r] << << "yp " << endl;
                r++;
                if (r >= height.size()) {
                    break;
                }
                
            } else { 
                cout << height[l] << " " << height[r] << endl;
                templ = l;
                l++;
                while (l < r) {
                    cout << height[l] << " " << height[r] << endl;
                    area = area + (height[templ] - height[l]);
                    l++;
                }
                r++;

                if (r < height.size()) {
                    cout << height[l] << " " << height[r] << endl;
                }
                
            }

        }

        return area;
        
    }
};
