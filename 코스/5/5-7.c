#include <stdio.h>
int main(){
  int number[5][3]; 			// 각 집의 거주자 수
  int floor_total[5]={0}; 			// 층별 거주자 합계 (1층, 2층, 3층, 4층, 5층)
  int line_total[3]={0};  			// 호수별 거주자 합계 (1호라인, 2호라인, 3호라인)
  int total={0};  					// 아파트의 총 거주자 수
  int ho=1;  					// 아파트 호를 나타내는 변수
  int i, j; 					// 반복문 사용을 위한 변수

/*
1층 101 102 103
2층 201 202 203
3층 301 302 303
4층 401 402 403
5층 501 502 503
이렇게 찍히니까 

for써서 j를 3만큼 반복해서 호수 찍고 i 5만큼 반복해서 층수 찍고
입력받고 그 수를 입력받으면 ho에 저장함 그리고 그 ho를 line이냐 floor이냐에 따라 활용하기
line
*/

for(i=0; i<5; i++){
    for(j=0; j<3; j++){
        scanf("%d", &number[i][j]);
        floor_total[i]+=number[i][j];
        line_total[j]+=number[i][j];
        total+=number[i][j];
    }
}




for(i=0; i<5; i++){
    printf("Floor:%d, %dpeople\n", i+1, floor_total[i]);
}

for(j=0; j<3; j++){
    printf("The number of people living in the unit %d line: %d\n", j+1, line_total[j]);
};

printf("Total number of people living in the apartment: %d", total);


  return 0;
}
