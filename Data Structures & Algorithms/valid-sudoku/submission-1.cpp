class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char val = board[r][c];
                if (val == '.') continue;

                int boxIndex = (r / 3) * 3 + (c / 3);

                if (!rows[r].insert(val).second) return false;
                if (!cols[c].insert(val).second) return false;
                if (!boxes[boxIndex].insert(val).second) return false;
            }
        }
        
    }
};
