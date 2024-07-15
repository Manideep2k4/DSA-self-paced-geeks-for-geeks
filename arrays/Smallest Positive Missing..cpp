#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(int arr[], int n) {
        // Place each element in its correct position if it is a positive integer
        for (int i = 0; i < n; ++i) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }
        
        // Find the first index where arr[i] != i + 1
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }
        
        // If all numbers are present from 1 to n, return n + 1
        return n + 1;
    }
};


