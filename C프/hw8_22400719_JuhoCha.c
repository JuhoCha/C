// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int list[100] =  {5, 8, 7, 0, 0, 2, 1, 9, 2, 8, 0, 2, 2, 4, 7, 5, 4, 9, 7, 7, 0, 0, 8, 6, 9, 9, 7, 4, 2, 7, 4, 7, 8, 1,

   9, 0, 5, 0, 0, 9, 1, 2, 4, 3, 6, 1, 8, 0, 0, 7, 0, 2, 8, 8, 8, 9, 7, 8, 3, 9, 7, 9, 8, 5, 2, 7, 8,

   7, 0, 0, 6, 1, 2, 2, 4, 8, 3, 4, 1, 5, 1, 1, 7, 1, 1, 8, 0, 8, 6, 5, 9, 5, 4, 7, 1, 8, 6, 1, 5, 6  };
  
    
    int save=list[0];
    int max_count=1;//연속하는 수 개수
    int count=1;//현재 연속하는 갯수(업데이트)
   
    int i=0;
    
    
    //==은 비교 연산자이고 =대입 연산자 
    for(int i=0; i<99; i++){
        if(list[i]==list[i+1]){
            count++;
        }else{
            if(count>max_count){
                max_count=count;
                save=list[i];
            }count=1;
        }
    }

        if(count>max_count){
            max_count=count;
            save=list[i];
        }
printf("같은 값: %d, 연속되는 수의 개수: %d\n", save, max_count);

    return 0;
}