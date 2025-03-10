#include <stdio.h>

void swap(int * a, int * b) {
    int temp = * a;
    * a = * b;
    * b = temp;
}

void bubbleSort(int * arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap( & arr[j], & arr[j + 1]);
            }
        }
    }
}

void waveSort(int * arr, int n) {
    bubbleSort(arr, n);
    for (int i = 1; i < n; i += 2) {
        swap( & arr[i], & arr[i - 1]);
    }
}

int main() {
    int n;
    scanf("%d", & n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    waveSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}