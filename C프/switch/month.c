// Online C compiler to run C program online
#include <stdio.h>

int main() {//최대, 최소, 평균값
    int m;
    int d;
    
    scanf("%d", &m);
    
    switch(m){
        case 2: d=28; break;
        case 4: d=30; break;
        case 6: d=30; break;
        case 9: d=30; break;
        case 11: d=30; break;
        default: d=31; break;
    }
printf("%d", d);

    return 0;
}
