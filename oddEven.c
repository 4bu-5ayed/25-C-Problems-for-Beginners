#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int n, i, j = 0, k = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[MAX_SIZE];
    int even[MAX_SIZE];
    int odd[MAX_SIZE];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) {
            even[j] = a[i];
            j++;
        }
        else {
            odd[k] = a[i];
            k++;
        }
    }
    printf("The even elements are: ");
    for(int i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\nThe odd elements are: ");
    for(int i= 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}