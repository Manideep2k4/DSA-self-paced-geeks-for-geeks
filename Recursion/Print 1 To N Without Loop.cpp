class Solution {
public:
    void printNos(int N) {
        if (N == 1) {
            cout << 1;
        } else {
            printNos(N - 1); 
            cout << " " << N; 
        }
    }
};
