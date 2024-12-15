#include <stdio.h>
#include <math.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 1; 
    float prev_ratio = 0.0, curr_ratio = 0.0;
    int fib_n_plus_1, fib_n;

    while (1) {
        fib_n = fibonacci(n);  
        fib_n_plus_1 = fibonacci(n + 1); 

        curr_ratio = (float)fib_n_plus_1 / fib_n;//float 으로 계산해야함

        printf("%dth ration (%d / %d) : %.6f\n", n, fib_n_plus_1, fib_n, curr_ratio);

        if (fabs(curr_ratio - prev_ratio) < 0.000001) {
            break;  
        }

        prev_ratio = curr_ratio; 
        n++;  
    }

    return 0;
}
