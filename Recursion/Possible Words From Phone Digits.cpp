#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> possibleWords(int a[], int N) {
        if (N == 0) return {};
        vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};       
        vector<string> result;
        string current = "";
        possibleWordsUtil(a, N, 0, current, result, keypad);
        
        return result;
    }

private:
    void possibleWordsUtil(int a[], int N, int index, string& current, vector<string>& result, vector<string>& keypad) {
        if (index == N) {
            result.push_back(current);
            return;
        }
        string chars = keypad[a[index]];

        for (char c : chars) {
            current.push_back(c); 
            possibleWordsUtil(a, N, index + 1, current, result, keypad); 
            current.pop_back(); 
        }
    }
};	
