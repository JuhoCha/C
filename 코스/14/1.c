#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    printf("Fibonacci number from 1 to 20\n");
    
    for (int i = 1; i <= 20; i++) {
        printf("%d: %d\n", i, fibonacci(i));
    }
    
    return 0;
}
