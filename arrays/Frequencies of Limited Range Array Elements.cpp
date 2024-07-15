class Solution {
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        vector<int> freq(N, 0); // Initialize frequency array
        
        // Count frequencies
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] >= 1 && arr[i] <= N) {
                freq[arr[i] - 1]++;
            }
        }
        
        // Update arr to reflect frequencies
        for (int i = 0; i < N; ++i) {
            arr[i] = freq[i];
        }
    }
};

