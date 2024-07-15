
#include <vector>
#include <climits>
using namespace std;

class Solution{
public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2 = INT_MIN;
        
        for (int i = 0; i < sizeOfArray; ++i) {
            if (arr[i] > max) {
                max2 = max;
                max = arr[i];
            } else if (arr[i] > max2 && arr[i] != max) {
                max2 = arr[i];
            }
        }
        
        if (max2 == INT_MIN) {
            max2 = -1;
        }
        
        return {max, max2};
    }
};

