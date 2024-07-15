#include <algorithm>
using namespace std;

class Solution{
public:
    // Function to find median of the array elements.
    int median(int A[], int N) {
        sort(A, A + N);
        
        if (N % 2 == 1) {
            return A[N / 2];
        } else {
            int mid1 = N / 2 - 1;
            int mid2 = N / 2;
            return (A[mid1] + A[mid2]) / 2;
        }
    }
    
    // Function to find mean of the array elements.
    int mean(int A[], int N) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += A[i];
        }
        return sum / N;
    }
};


