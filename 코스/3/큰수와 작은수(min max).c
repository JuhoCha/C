#include <stdio.h>

int main() {
  int size;				  // 입력 받을 숫자의 개수 
  int number;             // 입력받은 수 
  int max_num=0;
  int min_num=100;   // 가장 큰 숫자, 가장 작은 숫자

//숫자 수 입력받고 
//그 수 만큼 반복해서 0에서 100사이 숫자 입력 받은 후 
//min max에 각각 100 0 설정해줘서 어차피 그 사이 간격에 있어야 하고 100인 min보다 작으면 그게 min되면 되고 max보다 크면 그게 max되면 되니까 
//가장 큰 수 작은 수 출력
int i;
scanf("%d", &size);//콤마 필요요


for(i = 1; i<=size; i++){
    scanf("%d", &number);
    
    if((number>=0 && number<=100)){
        if(number>max_num){
            max_num=number;
        }
        if(number<min_num){
            min_num=number;
        }
    }
        
  
}

printf("가장 큰 수 %d\n", max_num);
printf("가장 작은 수 %d\n", min_num);

  return 0;
}
