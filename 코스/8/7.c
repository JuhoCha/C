#include <stdio.h>

int maxOfTen(int number[10]);
int minOfTen(int number[10]); 

int main() {
  int number[10] = {0};
  int i;
  int max, min;
  
  max = maxOfTen(number);
  printf("Maximum value: %d\n", max);
  
  min = minOfTen(number);
  printf("Minimum value: %d\n", min);


  return 0;
}

int maxOfTen(int number[10]){
    int max = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &number[i]);
        if(number[i]>max){
            max = number[i];
        }
    }return max;
}
int minOfTen(int number[10]){ //같은 num받을때는 하나만 써줘도 된다
    int min = 100;
    for(int i=0; i<10; i++){
        if(number[i]<min){
            min = number[i];
        }
    }return min;
}
