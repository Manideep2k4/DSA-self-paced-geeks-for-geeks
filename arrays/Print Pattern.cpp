
#include <vector>

class Solution {
public:
    std::vector<int> pattern(int N) {
        std::vector<int> result;
        generatePattern(N, result);
        return result;
    }
    
private:
    void generatePattern(int n, std::vector<int>& result) {
        if (n <= 0) {
            result.push_back(n);
            return;
        }
        
        result.push_back(n);
        generatePattern(n - 5, result);
        if (n > 0) {
            result.push_back(n);
        }
    }
};

