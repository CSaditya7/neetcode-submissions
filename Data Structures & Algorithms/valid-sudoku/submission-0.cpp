class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
          for (int i = 0; i < m; i++) {
            vector<bool> seen(10, false);
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    if (seen[num]) return false; 
                    seen[num] = true;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            vector<bool> seen(10, false);
            for (int i = 0; i < m; i++) {
                if (board[i][j] != '.') {
                    int num = board[i][j] - '0';
                    if (seen[num]) return false;
                    seen[num] = true;
                }
            }
        }
        for (int startRow = 0; startRow < 9; startRow += 3) {
    for (int startCol = 0; startCol < 9; startCol += 3) {
        vector<bool> seen(10, false);
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol+3; j++) {
                char c = board[i][j];
                if (c != '.') {
                    int num = c - '0';
                    if (seen[num]) return false;
                    seen[num] = true;
                }
            }
        }
    }
}
return true; 
        
    }
};
