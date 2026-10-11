class NumMatrix {

private:
int _cols;
int _rows;
vector<vector<int>> _matrix;

public:

    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        _matrix.assign(rows + 1, vector<int>(cols + 1, 0));

        for(int i = 1; i <= rows; ++i)
        {
            for(int j = 1; j <= cols; ++j)
            {
                _matrix[i][j] = matrix[i-1][j-1] + _matrix[i-1][j] + _matrix[i][j-1] - _matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return _matrix[row2 + 1][col2 + 1] - _matrix[row2 + 1][col1] - _matrix[row1][col2 + 1] + _matrix[row1][col1];
    }
};
