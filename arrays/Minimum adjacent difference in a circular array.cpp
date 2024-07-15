#include <cmath>

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    int minAdjDiff(int arr[], int n){    
        // If there are only two elements, directly return their difference.
        if (n == 2) {
            return abs(arr[0] - arr[1]);
        }
        
        // Initialize minimum difference with a large value.
        int minDiff = INT_MAX;
        
        // Iterate through the array to find the minimum adjacent difference.
        for (int i = 0; i < n; ++i) {
            int diff = abs(arr[i] - arr[(i + 1) % n]);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
        
        // Return the minimum difference found.
        return minDiff;
    }
};

