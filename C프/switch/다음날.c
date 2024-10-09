// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int y=0;
    int m=0;
    int d=0;
    int ndays;
    
    scanf("%d %d %d", &y, &m, &d);
    
    switch(m){
            case 2: ndays=28; break;
            case 4: ndays=30; break;
            case 6: ndays=30; break;
            case 9: ndays=30; break;
            case 11: ndays=30; break;
            default: ndays=31; break;
        }
    
    if(d==ndays){
        d=1;
        m++;
    }else{
        d++;
    }
    if(m>12){
        m=1; 
        y++;
    }
    
printf("%d %d %d", y, m, d);

    return 0;
}
