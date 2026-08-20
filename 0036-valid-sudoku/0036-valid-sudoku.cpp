class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<int, int> rowmp, colmp;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    rowmp[board[i][j]]++;
                    if (rowmp[board[i][j]] > 1)
                        return false;
                }
            }
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    colmp[board[j][i]]++;
                    if (colmp[board[j][i]] > 1)
                        return false;
                }
            }
        }

        for (int j = 0; j < 9; j++) {
            unordered_map<int, int> box;
            int row=j/3*3;
            int col=j%3*3;
            for (int r = 0; r < 3; r++) {
                for (int c = 0; c < 3; c++) {
                    if (board[row+r][col+c] != '.') {
                        box[board[row+r][col+c]] ++;
                        if (box[board[row+r][col+c]]  > 1)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};