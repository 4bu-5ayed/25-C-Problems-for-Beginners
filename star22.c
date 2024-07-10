#include <stdio.h>

int main() {
    int line, n;
    scanf("%d", &n);
    for(int row = 1; row <= n; row++) {
        int star = 2 * row - 1;
        int space = n - row;
        for(int coloumn = 1; coloumn <= star; coloumn++) {
            if(n == coloumn) {
                printf("%d ", coloumn);
            }
            else {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}