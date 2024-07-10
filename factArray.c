#include <stdio.h>
int fact(int a) {
    int p = 1;
    if(a == 0) {
        return 1;
    }
    for(int i = 1; i <= a; i++) {
        p = p * i;
    }
    return p;
}
int main() {
    int n, r, nCr, nPr;

    printf("Enter a integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", nPr);
    return 0;
}