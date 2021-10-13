int N = 1000005;
int sieve[N];
int prime_sieve()
{
    memset(sieve, 0, sizeof(sieve));
    sieve[0] = 0;
    sieve[1] = 0;
    for(int i=2; i*i<=N; i++) {
        if(sieve[i] = 1) {
            for(int j=i*i; j<=N; j+=i)
                sieve[j] = 0;
        }
    }
}
