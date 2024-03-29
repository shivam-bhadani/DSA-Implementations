long long int count(int S[], int n, int s) {
    long long dp[n+1][s+1];
    for(int i=0; i<=n; i++) dp[i][0] = 1;
    for(int j=1; j<=s; j++) dp[0][j] = 0;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=s; j++) {
            if(S[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i][j-S[i-1]] + dp[i-1][j];
        }
    }

    return dp[n][s];
}
