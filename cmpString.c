#include <stdio.h>
int main() {
    char s1[100];
    char s2[100];
    int check = 1;
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    for(int i = 0; s1[i] != '\0'; i++) {
        if(s1[i] == s2[i]) {
            check = 1;
        }
        else {
            check = 0;
            break;
        }
    }
    if(check == 1) {
        printf("Given strings are equal");
    }
    else {
        printf("Given strings are not equal");
    }
}