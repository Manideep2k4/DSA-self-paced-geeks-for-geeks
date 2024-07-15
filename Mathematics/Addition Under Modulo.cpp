class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        long long mod = 1000000007;
        return ((a % mod) + (b % mod)) % mod;
    }
};
