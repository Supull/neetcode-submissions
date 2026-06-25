class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> b(nums.begin(), nums.end());
        vector<int> s(b.begin(), b.end());
        vector <int> v;
        priority_queue<int> pq;

        for (auto val : s) {
            cout << val << " ";
        }

        
        int len = 1;
        int index = 0;
        if (nums.size() < 1) {
            return 0;
        }
        pq.push(1);
        if (nums.size() == 1) {
            return len;
        }
        for (int i = 0; i < s.size()-1; i++) {
            if ((s[i+1] - s[i]) == 1) {
                len += 1;
                v.push_back(len);
            } else {
                len = 1;
            }
        }

        int max = 1;
            
        
        for (auto val : v) {
            if (val > max) {
                max = val;
            }
        }
        return max;
        
    } 
};
