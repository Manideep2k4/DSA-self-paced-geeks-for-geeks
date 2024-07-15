#include <vector>
using namespace std;

class Solution {
public:
    int equilibriumPoint(vector<long long> &arr) {
        int n = arr.size();
        
        // Calculate total sum
        long long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            totalSum += arr[i];
        }
        
        long long leftSum = 0;
        
        // Iterate to find equilibrium point
        for (int i = 0; i < n; ++i) {
            // Calculate right sum
            long long rightSum = totalSum - leftSum - arr[i];
            
            // Check if equilibrium point
            if (leftSum == rightSum) {
                return i + 1; // 1-based index
            }
            
            // Update left sum for the next iteration
            leftSum += arr[i];
        }
        
        // If no equilibrium point found
        return -1;
    }
};

