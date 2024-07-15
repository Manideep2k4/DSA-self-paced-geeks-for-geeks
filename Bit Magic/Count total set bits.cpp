public class Solution {
    public static int countSetBits(int n) {
        int count = 0;
        int x = 2;
        while (x / 2 <= n) {
            count += (n / x) * (x / 2);
            count += Math.max(0, n % x - (x / 2) + 1);
            x *= 2;
        }
        return count;
    }

    public static void main(String[] args) {
        int n = 4; // test with n = 4
        System.out.println("Total set bits from 1 to " + n + " is " + countSetBits(n));
    }
}
