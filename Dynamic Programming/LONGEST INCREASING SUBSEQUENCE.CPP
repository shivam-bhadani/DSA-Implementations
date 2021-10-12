int longestSubsequence(int n, int a[])
{
    int dp[n];
    dp[0] = 1;
    for(int i=1; i<n; i++) {
        dp[i] = 1;
        for(int j=i-1; j>=0; j--) {
            if(a[i]<=a[j]) continue;
            dp[i] = max(dp[i], 1+dp[j]);
        }
    }
    return *max_element(dp, dp+n);
}
