class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            for (int i = 0; i < 9; i++) {
                unordered_set<char> s;
                for (int j = 0; j < 9; j++) {
                    if (board[i][j] == '.') continue;
                    if (s.count(board[i][j])) return false;
                    s.insert(board[i][j]);
                }
            }
            
            for (int j = 0; j < 9; j++) {
                unordered_set<char> s;
                for (int i = 0; i < 9; i++) {
                    if (board[i][j] == '.') continue;
                    if (s.count(board[i][j])) return false;
                    s.insert(board[i][j]);
                }
            }
            
            for (int square = 0; square < 9; square++) {
                unordered_set<char> s;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        int row = (square / 3) * 3 + i;
                        int col = (square % 3) * 3 + j;
                        if (board[row][col] == '.') continue;
                        if (s.count(board[row][col])) return false;
                        s.insert(board[row][col]);
                    }
                }
            }
            
            return true;
        }
    };
    