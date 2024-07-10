#include <stdio.h>
#define MAX 100

void copy_array(int a[], int n, int b[]) {
    int j = 0;
    for(int i = n - 1; i >= 0; i--) {
        b[j] = a[i];
        j++;
    }
}

void rev_array(int b[], int n) {
    printf("Reverse of the array = ");
    for(int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

int main() {
    int a[MAX], b[MAX], n;

    printf("Enter the length of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    copy_array(a, n, b);
    rev_array(b, n);
    return 0;
}