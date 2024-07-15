class Solution{
public:
    void rearrange(long long *arr, int n) {
        if (n <= 1)
            return;
        int maxIdx = n - 1;
        int minIdx = 0;
        
        long long maxElement = arr[maxIdx] + 1; 
        
        for (int i = 0; i < n; ++i) {
       
            if (i % 2 == 0) {
                arr[i] += (arr[maxIdx] % maxElement) * maxElement;
                maxIdx--;
            }

            else {
                arr[i] += (arr[minIdx] % maxElement) * maxElement;
                minIdx++;
            }
        }
        for (int i = 0; i < n; ++i)
            arr[i] /= maxElement;
    }
};

