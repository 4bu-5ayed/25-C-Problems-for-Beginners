#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], n, even = 0, odd = 0;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;
}