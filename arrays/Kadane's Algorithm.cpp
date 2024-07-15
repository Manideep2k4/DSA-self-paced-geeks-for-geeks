class Solution {
public:
    long long maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0;
        
        long long maxSum = arr[0];
        long long currentSum = arr[0];
        
        for (int i = 1; i < n; ++i) {
            currentSum = max((long long)arr[i], currentSum + arr[i]);
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};	
