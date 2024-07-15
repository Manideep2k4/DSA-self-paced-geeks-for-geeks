
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        int max_right = arr[n - 1];
        
        // Traverse from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (arr[i] >= max_right) {
                result.push_back(arr[i]);
                max_right = arr[i];
            }
        }
        
        // Reverse the result to maintain original order
        reverse(result.begin(), result.end());
        
        return result;
    }
};


