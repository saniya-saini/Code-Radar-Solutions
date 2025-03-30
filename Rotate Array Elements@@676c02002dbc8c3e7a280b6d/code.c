#include <stdio.h>

void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i, j;
    
    // Read array size
    scanf("%d", &n);
    int arr[n];  // Now 'n' is defined before array declaration

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read k
    scanf("%d", &k);
    k = k % n;

    // Rotate the array using reverse method
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
