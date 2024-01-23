class Solution {
    // Generic swap method
    private <T> void swap(T[] arr, int i, int j) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Example usage to swap elements in an integer array
    void swapKth(int[] arr, int n, int k) {
        swap(arr, k-1, n-k);
    }
}
