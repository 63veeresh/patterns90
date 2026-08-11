#include <stdio.h>

int main() {
    int a[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n = 10;

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

//or 
//count number of zeroes 
//then fill the array with 0's and 1's

/*

int count = 0;

for (int i = 0; i < n; i++) {
    if (a[i] == 0)
        count++;
}

for (int i = 0; i < count; i++)
    a[i] = 0;

for (int i = count; i < n; i++)
    a[i] = 1;

*/
