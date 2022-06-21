So, we can recursively build up our solution as -.
​
At each cell, explore the two choices available to us - go right & go down (Recursive function).
​
If we reach the bottom-right cell of the grid, we have found a unique path (Base Condition - I).
​
If at any time, we reach a cell with value 1, it is an obstacle cell and we can't move any further. So, we just stop exploring further paths from this cell (Base Condition - II).
​
We will accumulate all such unique paths.
​
C++
​
int m, n;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
m = size(obstacleGrid), n = size(obstacleGrid[0]);
return solve(obstacleGrid, 0, 0);
}
// function to recursively explore all unique paths
int solve(vector<vector<int> >& grid, int i, int j){
if(i < 0 || j < 0 || i >= m || j >= n) return 0;          // bounds checking
if(grid[i][j]) return 0;   // if there's obstacle, just return 0 and stop further exploration
if(i == m - 1 && j == n - 1 && !grid[i][j]) return 1;     // if we have reached end cell, return 1 if there's no obstacle
return solve(grid, i + 1, j) + solve(grid, i, j + 1);     // explore the two choice we have at each cell
}
Python
​
def uniquePathsWithObstacles(self, grid: List[List[int]]) -> int:
m, n = len(grid), len(grid[0])
def solve(grid, i, j):
if i >= m or j >= n or i < 0 or j < 0 or grid[i][j]:
return 0
if i == m - 1 and j == n - 1:
return 1
return solve(grid, i + 1, j) + solve(grid, i, j + 1)
return solve(grid, 0, 0)
✔️ Solution - II (Dynamic Programming - Recursive version) [Accepted]
​
We can observe that there are a lot of cells that are revisited in the above appraoch and the whole path is recursed till the bottom-right cell is reached for each cell again and again. We don't need to recalculate this everytime if we just store the previously calculated result for a given cell.
​
We can do this by maintaining a 2d DP array. Here dp[i][j] will denote the number of unique paths to reach the bottom-right corner of the grid starting from the cell - obstacleGrid[i][j].
​
C++
​
int m, n;
vector<vector<int> > dp;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
m = size(obstacleGrid), n = size(obstacleGrid[0]);