class Solution{
public:
    int kadane(int arr[], int num) {
        int maxEndingHere = arr[0];
        int maxSoFar = arr[0];
        
        for (int i = 1; i < num; ++i) {
            maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
            maxSoFar = max(maxSoFar, maxEndingHere);
        }
        
        return maxSoFar;
    }
    
    int circularSubarraySum(int arr[], int num){
        // Case 1: Maximum subarray sum using standard Kadane's algorithm
        int maxStraightSum = kadane(arr, num);
        
        // Case 2: Maximum subarray sum which includes wrapping around.
        // Calculate total sum and find minimum subarray sum
        int totalSum = 0;
        for (int i = 0; i < num; ++i) {
            totalSum += arr[i];
        }
        
        // Invert the sign of each element for finding minimum subarray sum
        for (int i = 0; i < num; ++i) {
            arr[i] = -arr[i];
        }
        
        // Calculate minimum subarray sum using modified Kadane's algorithm
        int minSubarraySum = kadane(arr, num);
        
        // Calculate maximum circular subarray sum
        int maxCircularSum = totalSum + minSubarraySum;
        
        // Handle case where all elements are negative (maxStraightSum would be the answer in that case)
        if (maxCircularSum == 0) {
            return maxStraightSum;
        }
        
        return max(maxStraightSum, maxCircularSum);
    }
};
