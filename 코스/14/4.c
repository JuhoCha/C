#include <stdio.h>

int power(int n, int a) {
    if (a == 0) {
        return 1; 
    } else if (a == 1) {
        return n; 
    } else if (a % 2 == 0) {
        int half_power = power(n, a / 2);
        return half_power * half_power;
    } else {
        int half_power = power(n, a / 2);
        return half_power * half_power * n;
    }
}

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", power(num1, num2));

    return 0;
}


