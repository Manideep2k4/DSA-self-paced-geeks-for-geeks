class Solution{
  public:
    //Complete this function
    int RecursivePower(int n,int p)
   {
        long long mod = 1000000007;
        if(p == 0)
            return 1;
        long long temp = RecursivePower(n, p/2);
        temp = (temp * temp) % mod;
        if(p % 2 == 1)
            temp = (temp * n) % mod;
        return temp;
    }
};

