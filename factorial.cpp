long long modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    long long result = 1;
    for (int i = 1; i <= n; i++){
        result = (result * i) % p;
    }
    return result;
}