#include <cmath>

class Solution{
  public:
    //Complete this function
    int countDigits(int n)
    {
        return (n == 0)? 1 : (int)log10(n) + 1;
    }
};

