/** 62. Unique Paths

A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

**/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > paths(m, vector<int> (n));
        for (int i = 0; i < n; i++)
            paths[m-1][i] = 1;
        for (int j = 0; j < m; j++)
            paths[j][n-1] = 1;
        
        for (int i = m-2; i >= 0; i--){
            for (int j = n-2; j >= 0; j--) {
                paths[i][j] = paths[i][j+1] + paths[i+1][j]; 
            }
        }
        return paths[0][0];
    }
};