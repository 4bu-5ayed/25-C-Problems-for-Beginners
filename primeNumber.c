#include <stdio.h>
#define MAX 100

int main() {
    int n, j = 0;
    int a[MAX];
    int prime[MAX];

    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        int p = 1;
        if(a[i] != 0 && a[i] != 1) {
            for(int k = 2; k <= (a[i] / 2); k++) {
                if(a[i] % k == 0) {
                    p = 0;
                    break;
                }
            }
        } else {
            p = 0;
        }
        if(p == 1) {
            prime[j] = a[i];
            j++;
        }
    }
    if(j != 0) {
        printf("The prime numbers are: ");
        for(int i = 0; i < j; i++) {
            printf("%d ", prime[i]);
        }
    }
    else {
        printf("There is no prime number in the array");
    }
    return 0;
}