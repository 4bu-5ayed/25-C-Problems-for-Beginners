#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], n, sum = 0;

    printf("Enter the length of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of the elements = %d", sum);
    return 0;
}