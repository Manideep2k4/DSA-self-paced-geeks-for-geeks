#include <vector>
using namespace std;

class Solution {
public:
    void reverseInGroups(vector<long long int>& arr, int k) {
        int n = arr.size();
        int start = 0;
        
        while (start < n) {
            // Calculate end index of the current group
            int end = min(start + k - 1, n - 1);
            
            // Reverse the current group
            int left = start;
            int right = end;
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
            
            // Move to the next group
            start += k;
        }
    }
};


