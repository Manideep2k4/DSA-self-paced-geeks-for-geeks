class Solution {
public:
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element) {
        // Step 1: Shift elements to the right from the end up to the index
        for (int i = sizeOfArray - 1; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        
        // Step 2: Insert the element at the specified index
        arr[index] = element;
    }
};

