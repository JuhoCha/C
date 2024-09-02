#include <stdio.h>

int main() {
  int num1, num2, num3;   // 첫 번째 숫자, 두 번째 숫자, 세 번째 숫자 
  int max_num, min_num;   // 가장 큰 숫자, 가장 작은 숫자

    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1>=num2&&num2>=num3){
        max_num = num1;
        min_num = num3;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num1>=num3&&num3>=num2){
        max_num = num1;
        min_num = num2;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num2>=num1&&num1>=num3){
        max_num = num2;
        min_num = num3;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num2>=num3&&num3>=num1){
        max_num = num2;
        min_num = num1;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num3>=num1&&num1>=num2){
        max_num = num3;
        min_num = num2;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num3>=num2&&num2>=num1){
        max_num = num3;
        min_num = num1;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }
    else if(num1=num2=num3){
        min_num = num3;
        max_num = num1;
        printf("가장 큰 수 %d\n", max_num);
        printf("가장 작은 수 %d\n", min_num);
    }


  return 0;
}
