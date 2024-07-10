#include <stdio.h>
int fact(int a) {
    int p = 1;
    if(a == 0) {
        return 1;
    }
    else{
        for(int i = 1; i <= a; i++) {
        p = p * i;
        }
        return p;
    }
    
}
int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The factorial of %d = %d", n, fact(n));
}