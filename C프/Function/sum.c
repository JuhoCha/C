// Online C compiler to run C program online
#include <stdio.h>

int add(int a, int b){
    int sum;
        sum=a+b;
        return sum;
}

int main() {
    int x, y, z;
        x = 3; 
        y = 4;
        z = add(x, y);
        printf("z = %d\n", z);
}
