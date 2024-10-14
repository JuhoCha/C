// Online C compiler to run C program online
#include <stdio.h>

int add(int a, int b);

int main() {
    int n;
    n = add(3,5);
}

int add(int a, int b){
    int sum;
    sum = a+b;
    printf("%d", sum);
    return sum;
}
