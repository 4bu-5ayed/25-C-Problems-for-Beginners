#include <stdio.h>

int main() {
    int n, count = 0, sum = 0, rem, store;

    printf("Enter the number: ");
    scanf("%d", &n);
    int c = store = n;
    while(c > 0) {
        c = c / 10;
        count++;
    }

    while(n > 0) {
        int p = 1;
        rem = n % 10;
        for(int i = 0; i < count; i++) {
            p = p * rem;
        }
        sum = sum + p;
        n = n / 10;
    }
    if(sum == store) {
        printf("%d is an armstrong number", store);
    }
    else {
        printf("%d is not an armstrong number", store);
    }
}