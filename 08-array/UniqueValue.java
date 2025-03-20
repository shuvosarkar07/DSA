public class UniqueValue {
    public static void main(String[] args) {
        int[] arr = {10, 14, 7, 10, 23, 27, 32, 23};
        int n = arr.length;

        System.out.println("Array: ");
        printArray(arr, n);
        System.out.println("Unique elements: ");
        findUnique(arr, n);
    }

    public static void findUnique(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            int count = 0;
            
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            
            if (count == 1) {
                System.out.println(arr[i]);
            }
        }
    }

    public static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
