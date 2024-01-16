#include <stdio.h>

int main() {
    int n = 100;
    long long int fib[n]; // to store Fibonacci series
    long long int sum = 0;

    // Initializing the first two terms
    fib[0] = 0;
    fib[1] = 1;

    // Generating Fibonacci series and calculating the sum
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Calculating the sum of the Fibonacci series
    for (int i = 0; i < n; i++) {
        sum += fib[i];
    }

    // Printing the sum
    printf("Sum of the Fibonacci series up to %d terms: %lld\n", n, sum);

    return 0;
}
