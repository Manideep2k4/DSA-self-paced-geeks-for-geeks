class Solution{    
    
    // arr[]: input array
    // num: size of array
    // Function to check if array is sorted and rotated
    public static boolean checkRotatedAndSorted(int arr[], int num){
          // Check for increasing sorted and rotated
        boolean increasingRotated = isIncreasingRotated(arr, num);
        // Check for decreasing sorted and rotated
        boolean decreasingRotated = isDecreasingRotated(arr, num);

        return increasingRotated || decreasingRotated;
    }
    
    // Helper function to check if array is sorted in increasing order and rotated
    private static boolean isIncreasingRotated(int arr[], int n) {
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                count++;
            }
        }
        if (arr[n - 1] > arr[0]) {
            count++;
        }
        return count == 1;
    }
    
    // Helper function to check if array is sorted in decreasing order and rotated
    private static boolean isDecreasingRotated(int arr[], int n) {
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] < arr[i]) {
                count++;
            }
        }
        if (arr[n - 1] < arr[0]) {
            count++;
        }
        return count == 1;
    }

    // Example usage
    public static void main(String[] args) {
        int[] arr1 = {3, 4, 1, 2};
        int[] arr2 = {1, 2, 3};
        System.out.println(checkRotatedAndSorted(arr1, arr1.length) ? "Yes" : "No"); // Output: Yes
        System.out.println(checkRotatedAndSorted(arr2, arr2.length) ? "Yes" : "No"); // Output: No

        // Your code here
        
    }
    
}
  java code
