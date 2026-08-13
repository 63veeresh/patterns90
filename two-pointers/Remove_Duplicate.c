#include <stdio.h>

int main() {
    int arr[6] = {1, 1, 1, 2, 2, 3};
    int i = 0;

    for (int j = 1; j < 6; j++) {
        if (arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}