
class Solution {
    public int exactly3Divisors(int N) {
        int count = 0;
        for (int i = 2; i * i <= N; i++) {
            if (isPrime(i)) {
                if (i * i <= N) {
                    count++;
                }
            }
        }
        return count;
    }

    public boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
