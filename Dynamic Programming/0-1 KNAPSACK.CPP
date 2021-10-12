// Recursive

int dp[1001][1001];
int knapSack(int W, int wt[], int val[], int n)
{
    memset(dp, -1, sizeof(dp));
    return solve(wt, val, n, W);
}

int solve(int wt[], int val[], int n, int W)
{
    if(n==0 || W==0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];
    if(wt[n-1]>W) return dp[n][W] = solve(wt, val, n-1, W);
    else return dp[n][W] = max(val[n-1]+solve(wt, val, n-1, W-wt[n-1]), solve(wt, val, n-1, W));
}

// Iterative

int knapSack(int W, int wt[], int val[], int n)
{
    int dp[n+1][W+1];
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=W; j++) {
            if(i==0 || j==0) dp[i][j] = 0;
            else if(wt[i-1]>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
        }
    }
    return dp[n][W];
}
