#include <stdio.h>

int ackermann(int i, int j) {
    if (i == 0) {
        return j + 1; 
    } else if (j == 0) {
        return ackermann(i - 1, 1); 
    } else {
        return ackermann(i - 1, ackermann(i, j - 1)); 
    }
}

int main() {
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            printf("Ackermann(%d, %d) = %d\n", i, j, ackermann(i, j));
        }
    }
    return 0;
}


