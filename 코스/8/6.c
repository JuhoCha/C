#include <stdio.h>

void PrintCharWithBlank(int blanks, int size, char ch);

int main() {
    int blanks=0;
    int size=0;
    char ch;
    
    //문자 높이 공백 여백
    scanf(" %c", &ch);
    scanf("%d", &size);
    scanf("%d", &blanks);
    
    PrintCharWithBlank(blanks, size, ch);


    return 0;
}

void PrintCharWithBlank(int blanks, int size, char ch){
    int i, j;
    
    if(size<0||blanks<0){
        printf("Invalid input");
        
    }else{
        for(i=0; i<size; i++){
            //블랭크
            for(j=0; j<blanks + size - 1 - i; j++){
                printf(" ");
            }
            //기호
            for(j=0; j<=i; j++){
                printf("%c", ch);
            }printf("\n");
            
        }
    }
}
