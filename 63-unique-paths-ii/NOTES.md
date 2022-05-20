int m = size(grid), n = size(grid[0]);
grid[0][0] ^= 1;  // if no obstacle at start, we can reach here in 1 way
/* For each cell of first row and column, we can either reach that cell in 1 way
* if previous column/row cell are not obstacle respectively, or not reach it at all.
* That's what we are doing below */
for(int i = 1; i < n; i++) grid[0][i] = !grid[0][i] & grid[0][i - 1]; // we can reach
for(int i = 1; i < m; i++) grid[i][0] = !grid[i][0] & grid[i - 1][0];
// same process as in above solutions -
for(int i = 1; i < m; i++)
for(int j = 1; j < n; j++)
grid[i][j] = !grid[i][j] ? grid[i - 1][j] + grid[i][j - 1] : 0;
return grid[m - 1][n - 1];
}
Python
​
def uniquePathsWithObstacles(self, grid: List[List[int]]) -> int:
m, n = len(grid), len(grid[0])
grid[0][0] ^= 1
for i in range(1, n):
grid[0][i] = grid[0][i - 1] & (not grid[0][i])
for j in range(1, m):
grid[j][0] = grid[j - 1][0] & (not grid[j][0])
for i in range(1, m):
for j in range(1, n):
grid[i][j] = grid[i - 1][j] + grid[i][j - 1] if not grid[i][j] else 0
return grid[m - 1][n - 1]
Time Complexity : O(M*N)
Space Complexity : O(1)