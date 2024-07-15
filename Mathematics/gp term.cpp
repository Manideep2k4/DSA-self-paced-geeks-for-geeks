GP Term
class Solution
{
    
    public double termOfGP(int A,int B,int N)
    {
        double r = (double)B / A; // common ratio
        double nthTerm = A * Math.pow(r, N - 1);
        return nthTerm;
    }

}
