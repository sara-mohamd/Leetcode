class NumMatrix {
private:
    vector<vector<int>> pref;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        pref.resize(row + 1, vector<int>(col + 1));
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
                pref[i][j] = pref[i][j - 1] + matrix[i - 1][j - 1];
        }
        for (int j = 0; j <= col; j++)
        {
            for (int i = 1; i <= row; i++)
                pref[i][j] += pref[i - 1][j];
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++, row2++;
        col1++, col2++;
        long long sum1 = pref[row2][col1 - 1] + pref[row1 - 1][col2];
        long long sum2 = pref[row2][col2] + pref[row1 - 1][col1 - 1];
        long long ans = sum2 - sum1;
        return ans;
    }
};
