class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m == n) return -1;
        int s = m^n;
        int count = 0;
        while((s & 1) == 0){
            s = s >> 1;
            count++;
        }
        return count + 1;
    }
};
