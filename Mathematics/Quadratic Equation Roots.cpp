
#include <vector>
#include <cmath>

class Solution {
public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int D = b*b - 4*a*c; // Calculate discriminant
        
        if (D < 0) {
            return {-1}; // Roots are imaginary
        } else if (D == 0) {
            int root = -b / (2*a); // Calculate the single root
            return {root, root};
        } else {
            // Calculate the two distinct roots
            int x1 = floor((-b + sqrt(D)) / (2*a));
            int x2 = floor((-b - sqrt(D)) / (2*a));
            
            // Ensure x1 is greater than or equal to x2
            return {max(x1, x2), min(x1, x2)};
        }
    }
};

