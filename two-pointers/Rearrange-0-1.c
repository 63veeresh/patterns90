#include <stdio.h>

int main() {
    int a[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = 10;

    int i = 0;
    int j = n - 1;

    // Before
    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    printf("\n");

    // Two-pointer approach
    while (i < j) {

        while (i < j && a[i] == 0) {
            i++;
        }

        while (i < j && a[j] == 1) {
            j--;
        }

        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            i++;
            j--;
        }
    }

    // After
    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}