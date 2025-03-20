// Write a function that takes an array of integers and its size as input, finds the minimum and maximum elements in the array, and swaps their positions. The function should modify the array in place. After swapping, print the modified array.



public class SwapMinMax {

    public static void swapMinMax(int[] arr, int n) {
        int minIdx = 0; 
        int maxIdx = 0; 

        for (int i = 0; i < n; i++) {
            if (arr[i] < arr[minIdx]) {
                minIdx = i;
            }
            if (arr[i] > arr[maxIdx]) {
                maxIdx = i;
            }
        }

        // Swap the elements at minIdx and maxIdx
        int temp = arr[minIdx];
        arr[minIdx] = arr[maxIdx];
        arr[maxIdx] = temp;
    }

    public static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] arr = {23, 33, 7, 43, 15, 17};
        int n = arr.length;

        System.out.print("Original arr: ");
        printArray(arr, n);

        swapMinMax(arr, n);

        System.out.print("After swap: ");
        printArray(arr, n);
    } 
}