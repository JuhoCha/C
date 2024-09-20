#include <stdio.h>

 int main() {
    //n이 짝수이면 사각형모양 홀수라면 삼각형모양
    //%2==0 이걸로 홀짝 거르고 for써서 별찍기
    //대신 사각형일때는 중간이 비어야 하니까 두번째 줄하고 마지막-1줄에는 빈칸을 별의 갯수-2만큼;
     int num;
     int i, j =0;
     int blank =0;
     int star =1;

    scanf("%d", &num);
    blank = (num-1)/2;
   
    if(num%2==0){
        for(i=1; i<=num; i++){
            //사각형 찍는 코드 근데 별갯수-2만큼 중간에 비어야함
            if(i>=2 && i<=num-1){
                printf("*");
                for(j=1; j<=num-2; j++){
                   printf(" ");
                }
                printf("*");
            }else{
                for(j=1; j<=num; j++){
                    printf("*");
                }
            }
        printf("\n");
        }
    }
     
   
    else{
        for(i=1; star<=num; i++){
            //삼각형 찍는 코드
            for(j=1; j<=blank; j++){
                printf(" ");
            }
            for(j=1; j<=star; j++){
                printf("*");
            }
            for(j=1; j<=blank; j++){
                printf(" ");
            }
            printf("\n");
            blank--;
            star+=2;
        }
    }



     return 0;
 }
