#include <stdio.h>
#include <string.h>

int len(char a[100]) {
    int l;
    return l = strlen(a);
}
int main() {
    char s[100];
    printf("Enter the string: ");
    scanf("%s", &s);
    printf("Length of the string = %d", len(s));
}