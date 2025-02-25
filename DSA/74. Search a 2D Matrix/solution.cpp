class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;

        while (row < rows && col >= 0)
        {
            int val = matrix[row][col];
            if (target == val)
                return true;
            if (target > val)
                row++;
            else
                col--;
        }
        return false;
    }
};