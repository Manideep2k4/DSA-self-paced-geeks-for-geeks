#include <iostream>
using namespace std;

class Solution{
public:
    int maxEvenOdd(int arr[], int n) {
        if (n == 1) return 1; // Special case for single element array
        
        int maxLength = 1;
        int currentLength = 1;
        
        for (int i = 1; i < n; ++i) {
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
                // Elements are alternating
                currentLength++;
                maxLength = max(maxLength, currentLength);
            } else {
                // Elements are not alternating, reset currentLength
                currentLength = 1;
            }
        }
        
        return maxLength;
    }
};

