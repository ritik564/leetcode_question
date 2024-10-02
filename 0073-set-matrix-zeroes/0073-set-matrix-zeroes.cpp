class Solution {
    void markrow(int i, int m, vector<vector<int>>& matrix)
    {
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] != 0)
            {
                matrix[i][j] = -11;
            }
        }
    }

    void markcol(int j, int n, vector<vector<int>>& matrix)
    {
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][j] != 0)
            {
                matrix[i][j] = -11;
            }
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); //row size
        int m = matrix[0].size(); //col size

        // First pass: mark rows and columns to be zeroed
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    markrow(i, m, matrix);
                    markcol(j, n, matrix);
                }
            }
        }

        // Second pass: set -1s to 0
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] == -11)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
