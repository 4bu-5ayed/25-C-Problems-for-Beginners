#include <stdio.h>
#include <math.h>

int main() {
    int o, n, oct = 0, dec = 0;
    printf("Choose a conversion:\n(1) Decimal to Octal\t(2) Octal to Decimal\n");
    scanf("%d", &o);

    if(o == 1) {
        int i = 1;
        printf("Enter the decimal number: ");
        scanf("%d", &n);
        while(n != 0) {
        int rem = n % 8;
        oct = oct + rem * i;
        i *= 10;
        n /= 8;
        }
        printf("Octal = %d", oct);
    }
    else if(o == 2) {
        int i = 0;
        printf("Enter the octal number: ");
        scanf("%d", &n);
        while(n != 0) {
        int rem = n % 10;
        dec = dec + (rem * pow(8, i));
        i++;
        n /= 10;
        }
        printf("Decimal = %d", dec);
    }
    return 0;
}