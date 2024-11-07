#include <stdio.h>
void maxMinOfTen(int number[10], int* max, int* min);

int main() {
  int num[10]; 		// 10개의 숫자를 받을 배열
  int max_num; 		// 가장 큰 숫자를 리턴 받을 변수, 
  int min_num; 		// 가장 작은 숫자를 리턴 받을 변수
  char file[20]; 		// 파일 이름
  FILE* data;

  // 이 곳에 코드를 작성하라.
  scanf("%s", file);
  data = fopen(file, "r"); //그냥 열어주고 원래 하던것 처럼 하면 되는듯?
  int i=0;
  for(i=0; i<10; i++){
    fscanf(data, "%d", &num[i]);
  }
    maxMinOfTen(num, &max_num, &min_num);
    
  printf("가장 큰 수 %d\n가장 작은 수 %d\n", max_num, min_num);
  fclose(data);
  return 0;
}

void maxMinOfTen(int number[10], int* max, int* min){
    int i=0;
    *max = 0;
    *min = 1000;
    for(i=0; i<10; i++){
        if(number[i]>*max){
            *max = number[i];
        }
        if(number[i]<*min){
            *min = number[i];
        }
    }
}
