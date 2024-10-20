#include <stdio.h>

void PrintChar(int size, char ch);

int main() {

    int size=0;
    char ch;
    
    PrintChar(size, ch);
    
  return 0;
}

void PrintChar(int size, char ch){
    scanf("%c", &ch);
    int i, j;
    
    for(i=0; i<10; i++){
        scanf("%d", &size);
        for(j=0; j<size; j++){
            printf("%c", ch);
        }printf("\n");
    }
}
