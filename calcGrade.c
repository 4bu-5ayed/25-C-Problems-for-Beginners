#include <stdio.h>

int main() {
    float n;
    printf("Enter your number: ");
    scanf("%f", &n);
    if(n >= 80) {
        printf("Grade: A+");
    }
    else if(n >= 70 && n < 80) {
        printf("Grade: A");
    }
    else if(n >= 60 && n < 70) {
        printf("Grade: A-");
    }
    else if(n >= 50 && n < 60) {
        printf("Grade: B");
    }
    else if(n >= 40 && n < 50) {
        printf("Grade: C");
    }
    else{
        printf("Grade: F");
    }
    ;

}