#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char str[100];
    printf("Enter the number: ");
    scanf("%s", s);
    strcpy(str, s);

    if(strcmp(strrev(s), str) == 0) {
        printf("%s is a palindrom number", str);
    }
    else {
         printf("%s is not a palindrom number", str);
    }
    return 0;
}