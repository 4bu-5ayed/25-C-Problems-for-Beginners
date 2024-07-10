#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], n, l = -10000, s = 10000, sum = 0;
    float avg;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        if(a[i] > l) {
            l = a[i];
        }
        if(a[i] < s) {
            s = a[i];
        }
    }
    avg = (float)sum / (float)n;
    printf("The largest number in array = %d\n", l);
    printf("The smallest number in array = %d\n", s);
    printf("The average of the elements = %.2f\n", avg);
    return 0;
}