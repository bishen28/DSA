#include <bits/stdc++.h>
using namespace std;

 
 
int solve(int m, int n, vector<vector<int>>& grid,  vector<vector<int>> &dp){
        if(m<0||n<0) return INT_MAX-100;
        if(m==0&&n==0) return grid[m][n];
        if(dp[m][n]!=-1) return dp[m][n];
        dp[m][n] = grid[m][n] + min(solve(m-1,n,grid,dp),solve(m,n-1,grid,dp));
        return dp[m][n];
    }
    
    int minPathSum(vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        //memeset(dp,-1,sizeof(dp));
        return solve(m-1,n-1,grid,dp);
    }


int main(){

     /*
     take input here
     */
     
     minPathSum(grid);

    return 0;
}
