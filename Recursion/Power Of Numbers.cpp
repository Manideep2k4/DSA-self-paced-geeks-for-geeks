class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
   {
       long long mod = 1000000007;
       long long reverse = 0;
       int temp = N;
       while(temp > 0) {
           reverse = (reverse * 10) + (temp % 10);
           temp /= 10;
       }
       
       return powerMod(N, reverse, mod);
    }
    
    long long powerMod(long long base, long long exponent, long long mod) {
        base %= mod;
        long long result = 1;
        while (exponent > 0) {
            if (exponent & 1)
                result = (result * base) % mod;
            base = (base * base) % mod;
            exponent >>= 1;
        }
        return result;
    }
};
