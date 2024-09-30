class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> answer;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        // index initialization
        int starting_row = 0;
        int starting_col = 0;
        int ending_row = row - 1;
        int ending_col = col - 1;

        while (count < total) {
            // Printing starting row
            for (int i = starting_col; i <= ending_col && count < total; i++) {
                answer.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;

            // Printing ending column
            for (int i = starting_row; i <= ending_row && count < total; i++) {
                answer.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;

            // Printing ending row
            for (int i = ending_col; i >= starting_col && count < total; i--) {
                answer.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            // Printing starting column
            for (int i = ending_row; i >= starting_row && count < total; i--) {
                answer.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
        }

        return answer;
    }
};
