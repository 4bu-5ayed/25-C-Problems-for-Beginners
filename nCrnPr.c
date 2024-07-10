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

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    nCr = fact(n) / (fact(r) * fact(n - r));
    nPr = fact(n) / fact(n - r);
    printf("nCr = %d\n", nCr);
    printf("nPr = %d\n", nPr);
    return 0;
}