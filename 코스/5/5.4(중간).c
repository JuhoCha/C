#include <stdio.h>
int main(){
   int num[10]; 				// 10개의 숫자
   int first=0;  			    // 첫 번째로 큰 수
   int second=0; 				// 두 번째로 큰 수
   int second_max_index=0; 		// 두 번째로 큰 수의 인덱스 
   int i;  					    // 반복문을 위한 변수

//max보다 큰 수 하고
//그 max보다 작은 수인데 &&해서 second 보다 큰 수 해서 
//두 번째 수 index로 알아내기..?
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
        
        if(num[i]>first){
            first = num[i];
        }
        if(first<num[i] && num[i]>second){
            second = num[i];
            second_max_index = i;
        }
    }
    printf("Second largest number: %d (%dth)\n", second, second_max_index);
    printf("%d", first);

  return 0;
}
