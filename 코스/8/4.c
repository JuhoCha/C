#include <stdio.h>

void PrintStar(int size);

int main() {
    int size=0;  
    
    PrintStar(size);
    
  return 0;
}

void PrintStar(int size){
    int i;
    int j;
   
    for(i=0; i<10; i++){
        scanf("%d", &size);
        
        for(j=0; j<size; j++){
            printf("*");
        }
        
        printf("\n");
    }
}
