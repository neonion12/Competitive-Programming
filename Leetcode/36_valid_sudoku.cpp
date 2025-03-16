#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N = 9;

        // Use hash sets to record the status
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int r = 0; r < N; r++) {
            for (int c = 0; c < N; c++) {
                char val = board[r][c];

                // Check if the position is filled with a number
                if (val == '.') {
                    continue;
                }

                // Check the row
                if (rows[r].count(val)) {
                    return false;
                }
                rows[r].insert(val);

                // Check the column
                if (cols[c].count(val)) {
                    return false;
                }
                cols[c].insert(val);

                // Check the box
                int idx = (r / 3) * 3 + c / 3;
                if (boxes[idx].count(val)) {
                    return false;
                }
                boxes[idx].insert(val);
            }
        }
        return true;
    }
};
