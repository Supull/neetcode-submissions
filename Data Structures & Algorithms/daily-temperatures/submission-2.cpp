class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<pair<int,int>> s1;
        vector<int> res(temperatures.size(), 0);
        

        for (int i = 0; i < temperatures.size()-1; i++) {

            s1.push({temperatures[i], i});

            while (!s1.empty() && s1.top().first < temperatures[i+1]) {

                res[s1.top().second] = ((i+1) - s1.top().second);
                s1.pop();
            }

        
        }

        return res;

        

       
        

        

    }
};
