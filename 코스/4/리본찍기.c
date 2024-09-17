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
    
    scanf("%d", &lines);
    lines = lines*2-1;
    
    for(i=1; i<=lines; i++){
        if(i<=lines/2){
            for(j=1; j<=stars; j++){
                printf("*");
            }
        }
        else{
            for(j==lines/2; j<=1; j--){
                printf("*");
            }
        }
        printf("\n");
        stars++;
        
    }


  return 0;
}
