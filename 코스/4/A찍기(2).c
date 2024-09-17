#include <stdio.h>

int main() {
    
    //어떻게 하면 A모양을 찍을까
    //별찍기 일단 해야하고
    //중간에 " "해서 공백을 줘야하는데 별갯수-2해서 양 끝 두개 빼곤
    //정상출력하고 별은 +=2해서 A모양 나오게 하는데
    //가운데 lines해서 /2인 부분은 제대로 찍히게
    
    int i, j =0;
    int stars=1;
    int lines=0;
    int heights=0;
    int blanks=0;
    
    scanf("%d", &lines); //&이거 잊지말기
    blanks = lines-1;
    for(i=1; i<=lines; i++){
        for(j=1; j<=blanks; j++){
            printf(" ");
        }
        if(i==1){
            for(j=1; j<=stars; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(j=1; j<=stars-2; j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        heights++;
        blanks--;
        stars+=2;
    }

  return 0;
}
