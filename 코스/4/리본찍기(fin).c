#include <stdio.h>

int main() {
    //리본을 찍어야 하니까
    //입력받은 크기의 2배 – 1 만큼의 줄 개수
    //10 입력받으면 19만큼의 줄 개수가 나오게
    //근데 5면 가운데 줄이 10줄 나와야 하니까
    //lines는 *2-1 하고 width는 *2하고..?
    //중간에 blank는 어떻게 하지 중간을 넘으면 ++되게 하고 안넘으면 --?
    
    int i, j=0;
    int stars=1;
    int lines=0;
    int width=0;
    int blanks=0;
    
    scanf("%d", &lines);
    //lines = lines*2-1; 그냥 별 찍는 코드 두 개 만들고 stars은 line-1해주면 한줄 사라짐
    blanks = lines*2-2; 
    
    for(i=1; i<=lines; i++){
        for(j=1; j<=stars; j++){
            printf("*");
        }
        for(j=1; j<=blanks; j++){ //j는 1이고 18이 될때까지 수행하는거니까 아 이해했어 공백이 18개 찍힐때까지 찍는거구나 ㅇㅋ for은 그 개수가 될때까지 반복
            printf(" ");
        }
        for(j=1; j<=stars; j++){
            printf("*");
        }
            printf("\n");
            stars++;
            blanks=blanks-2;
        }
        
    stars=lines-1;
    blanks = 2;
    for (i=1; i<=lines-1; i++){
        for (j=1; j<=stars; j++){
            printf("*");
        }
        for (j=1; j<=blanks; j++){
            printf(" ");
        }
        for (j=1; j<=stars; j++){
             printf("*");
        }
        if (i != lines * 2 - 1){ //이건 생략가능 마지막 한줄 enter되니까 그런건데 
            printf("\n");
        }
        stars--;
        blanks=blanks+2;
    }


  return 0;
}
