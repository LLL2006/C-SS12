#include <stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 8, 1, 7, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int lonNhat = timSoLonNhat(arr, size);

    printf("So lon nhat trong mang la: %d\n", lonNhat);

    return 0;
}

