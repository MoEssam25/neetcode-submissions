class Solution {
public:
    bool isValid_Cell(int i, int j, vector<vector<char>>& board)
    {
        vector<bool> values(10,false);

        // cols
        for (int row = 0; row < 9; row++)
        {
            if (board[row][j] != '.') {
                int v = board[row][j] - '0';
                if (values[v]) return false;
                values[v] = true;
            }
        }
        
        fill(values.begin(), values.end(), false);

        // rows
        for (int col = 0; col < 9; col++)
        {
            if (board[i][col] != '.') {
                int v = board[i][col] - '0';
                if (values[v]) return false;
                values[v] = true;
            }
        }
        
        // Square

        // Reset
        fill(values.begin(), values.end(), false);

        int startR = (i / 3) * 3;
        int startC = (j / 3) * 3;
        for (int r = startR; r < startR + 3; r++) {
            for (int c = startC; c < startC + 3; c++) {
                if (board[r][c] != '.') {
                    int v = board[r][c] - '0';
                    if (values[v]) return false;
                    values[v] = true;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if(!isValid_Cell(i, j, board))
                    return false;
            }
            
        }
        
        return true;
    }
};