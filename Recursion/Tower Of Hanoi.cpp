
class Solution {
  public:
    long long toh(int n, int from, int to, int aux) {
        // Your code here
         if (n == 1) {
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            return 1;
        }
        
        long long count = toh(n - 1, from, aux, to);
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        count++;
        count += toh(n - 1, aux, to, from);
        
        return count;
    }
    
};
