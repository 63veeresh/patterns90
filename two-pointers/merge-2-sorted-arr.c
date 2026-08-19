#include <stdio.h>

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n = 4;
    int m = 4;

    int c[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array: ");

    for (int x = 0; x < n + m; x++) {
        printf("%d ", c[x]);
    }

    return 0;
}