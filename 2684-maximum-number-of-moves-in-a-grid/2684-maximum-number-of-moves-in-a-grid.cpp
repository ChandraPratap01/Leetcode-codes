class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        // Get the number of rows and columns in the grid
        int row = grid.size();
        int col = grid[0].size();

        // Create a DP table initialized with 1's. This table will store the maximum number of moves
        // we can make starting from each cell.
        vector<vector<int>> dp(row, vector<int>(col, 1));

        // Iterate through each column starting from the second-to-last column and moving to the first column
        for (int j = col - 2; j >= 0; j--) {
            // Iterate through each row
            for (int i = 0; i < row; i++) {
                // Get the value of the current cell
                int val = grid[i][j];

                // Initialize max_move to 0. This will store the maximum moves we can make from this cell.
                int max_move = val < grid[i][j+1] ? dp[i][j+1] : 0;

                // Check the cell directly below and to the right, if it exists, and update max_move if possible
                if (i < row - 1) {
                    max_move = max(max_move, val < grid[i+1][j+1] ? dp[i+1][j+1] : 0);
                }

                // Check the cell directly above and to the right, if it exists, and update max_move if possible
                if (i > 0) {
                    max_move = max(max_move, val < grid[i-1][j+1] ? dp[i-1][j+1] : 0);
                }

                // Update the DP table for the current cell. The number of moves from this cell is 1
                // (the move to this cell itself) plus the maximum moves we can make from any of the valid
                // cells to the right.
                dp[i][j] = 1 + max_move;
            }
        }

        // Find the maximum value in the first column of the DP table, which represents the maximum moves
        // we can make starting from any cell in the first column.
        int ans = 0;
        for (int i = 0; i < row; i++) {
            ans = max(ans, dp[i][0]);
        }

        // Return the answer minus 1 because the problem definition considers the starting move as move 0.
        return ans - 1;
    }
};