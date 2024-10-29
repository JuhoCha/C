#include <stdio.h>
void maxMinOfTen(int number[10], int* max, int* min);

int main() {
  int num[10]; 		// 10개의 숫자를 받을 배열
  int max_num; 		// 가장 큰 숫자를 리턴 받을 변수, 
  int min_num; 		// 가장 작은 숫자를 리턴 받을 변수
  for(int i=0;i<10;i++){
    scanf("%d", &num[i]);
  }
  maxMinOfTen(num, &max_num, &min_num);
  printf("Maximum value: %d\nMinimum value: %d\n", max_num, min_num);
  return 0;
}

void maxMinOfTen(int number[10], int* max, int* min){
    int max_num=0;
    int min_num=100;
    for(int i=0; i<10; i++){
        if(number[i]>max_num){
            max_num = number[i];
        }
    }
    for(int i=0; i<10; i++){
        if(number[i]<min_num){
            min_num = number[i];
        }
    }
    *max = max_num;
    *min = min_num;
    
}
