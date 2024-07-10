#include <stdio.h>

int is_prime(int num) {
    if(num <= 1) return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int separate_primes(int arr[], int len, int primes[]) {
    int count = 0;
    for(int i = 0; i < len; i++) {
        if(is_prime(arr[i])) {
            primes[count] = arr[i];
            count++;
        }
    }
    return count;
}

void fibonacci(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        int n = arr[i];
        int fib[n];
        fib[0] = 0;
        fib[1] = 1;
        for(int j = 2; j < n; j++) {
            fib[j] = fib[j - 1] + fib[j - 2];
        }
        printf("First %d Fibonacci numbers: ", n);
        for(int j = 0; j < n; j++) {
            printf("%d ", fib[j]);
        }
        printf("\n");
    }
}

int main() {
    int len;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    int primes[len];
    int prime_len = separate_primes(arr, len, primes);
    fibonacci(primes, prime_len);
    return 0;
}