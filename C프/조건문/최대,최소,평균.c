// Online C compiler to run C program online
#include <stdio.h>

int main() {//최대, 최소, 평균값
    int min=100;
    int max=0;
    float average;
   
   int a, b, c;
   
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);
   
   if(a>max){
       max=a;
   }
   if(b>max){
       max=b;
   }
   if(c>max){
       max=c;
   }
   
   if(a<min){
       min=a;
   }
   if(b<min){
       min=b;
   }
   if(c<min){
       min=c;
   }
   average = (a+b+c)/3.0;
   
   printf("Max = %d\n", max);
   printf("Min = %d\n", min);
   printf("Average = %.1f\n", average);

    return 0;
}
