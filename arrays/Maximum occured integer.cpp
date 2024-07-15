#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int> diffArr(maxx + 2, 0);

        // Applying the difference array technique
        for (int i = 0; i < n; i++) {
            diffArr[l[i]]++;
            if (r[i] + 1 <= maxx) {
                diffArr[r[i] + 1]--;
            }
        }

        // Computing prefix sum to get actual frequency counts
        int maxFreq = 0;
        int result = 0;
        int currentSum = 0;
        for (int i = 0; i <= maxx; i++) {
            currentSum += diffArr[i];
            if (currentSum > maxFreq) {
                maxFreq = currentSum;
                result = i;
            }
        }

        return result;
    }
};
