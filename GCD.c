#include <stdio.h>

int main() {
    int a, b, rem;
    printf("Enter 2 integers: ");
    scanf("%d%d", &a, &b);
    int n1 = a, n2 = b;
    while(b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }
    int lcm = (n1 * n2) / a;
    printf("GCD of %d and %d = %d\n", n1, n2, a);
    printf("LCM of %d and %d = %d", n1, n2, lcm);
    return 0;
}