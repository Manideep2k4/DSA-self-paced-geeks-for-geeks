class Solution{
    public:
        int multiplicationUnderModulo(long long a, long long b)
    {
        long long mod = 1000000007;
        long long res = 0;
        a = a % mod;
        while (b > 0) {
            if (b & 1) {
                res = (res + a) % mod;
            }
            a = (a * 2) % mod;
            b >>= 1;
        }
        return (int)res;
    }
};	
