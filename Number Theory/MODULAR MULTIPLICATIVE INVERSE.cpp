int modInverse(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
 
    if (M == 1)
        return 0;
 
    while (A > 1) {
        int q = A / M;
        int t = M;
 
        M = A % M, A = t;
        t = y;
 
        y = x - q * y;
        x = t;
    }
 
    if (x < 0)
        x += m0;
 
    return x;
}
