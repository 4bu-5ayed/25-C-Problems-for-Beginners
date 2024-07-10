#include <stdio.h>

int main() {
    char a1[100], a2[100];
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++) {
        scanf("%c", &a1[i]);
        getchar();
        a2[i] = a1[i];
    }
    printf("The given array: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", a1[i]);
    }
    printf("The copied array: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", a2[i]);
    }
    return 0;
}