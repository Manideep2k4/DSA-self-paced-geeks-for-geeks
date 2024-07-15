class Solution {
public:
    int majorityWins(int arr[], int n, int x, int y) {
        int count_x = 0, count_y = 0;
        int ele_x = x, ele_y = y;

        for (int i = 0; i < n; i++) {
            if (arr[i] == x)
                count_x++;
            else if (arr[i] == y)
                count_y++;
        }

        if (count_x > count_y)
            return x;
        else if (count_y > count_x)
            return y;
        else
            return min(x, y); // return the smaller element if counts are equal
    }
};

