#include <vector>

class Solution {
public:
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        for (int i = 0; i < n - 1; i++) {
            if ((i % 2 == 0 && arr[i] < arr[i + 1]) || (i % 2 != 0 && arr[i] > arr[i + 1])) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};

