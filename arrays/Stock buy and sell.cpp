
class Solution {
public:
    vector<vector<int>> stockBuySell(vector<int> A, int n) {
        vector<vector<int>> result;
        
        int buy = 0, sell = 0;
        bool found = false;
        
        for (int i = 0; i < n - 1; ++i) {
            // If current day's price is less than next day's price, we buy on current day
            // and sell on next day.
            if (A[i + 1] > A[i]) {
                sell = i + 1;
                if (!found) {
                    buy = i;
                    found = true;
                }
            } else {
                // If we were making a transaction and the price drops, we finalize the transaction
                // and reset for the next potential transaction.
                if (found) {
                    result.push_back({buy, sell});
                    found = false;
                }
            }
        }
        
        // If we have a transaction in progress at the end, finalize it
        if (found) {
            result.push_back({buy, sell});
        }
        
        return result;
    }
};

