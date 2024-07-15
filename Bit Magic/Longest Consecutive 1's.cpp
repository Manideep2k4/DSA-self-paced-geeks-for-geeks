class Solution{
    public:
    int maxConsecutiveOnes(int n){
        int maxCount = 0, currCount = 0;
        while(n){
            if(n & 1){
                currCount++;
                maxCount = max(maxCount, currCount);
            }else{
                currCount = 0;
            }
            n >>= 1;
        }
        return maxCount;
    }
};
