int dp[201][201];
int eggDrop(int e, int f)
{
    memset(dp, -1, sizeof(dp));
    return solve(e, f);

}
int solve(int e, int f) {
    if(f==0 || f==1) return f;
    if(e==1) return f;
    if(dp[e][f] != -1) return dp[e][f];
    int ans = INT_MAX;
    for(int k=1; k<=f; k++) {
        int sur, br;
        if(dp[e-1][k-1]!=-1) br = dp[e-1][k-1];
        else {
            br = solve(e-1, k-1);
            dp[e-1][k-1] = br;
        }
        if(dp[e][f-k]!=-1) sur = dp[e][f-k];
        else {
            sur = solve(e,f-k);
            dp[e][f-k] = sur;
        }
        int temp = 1 + max(sur, br);
        ans = min(ans, temp);
    }
    return dp[e][f] = ans;
}
