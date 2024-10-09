// Online C compiler to run C program online
#include <stdio.h>

int main() {//perfect number구하기
    int a, b, c;
    int count;
   
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
   if(a%2==0){
       count++;
   }
   if(b%2==0){
       count++;
   }
   if(c%2==0){
       count++;
   }
   
   
   printf("짝수의 갯수 %d", count);

    return 0;
}
