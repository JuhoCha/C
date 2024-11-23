#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct st_point{ 
 float x; // x좌표 값 
 float y; // y좌표 값 
}; 

struct st_point* getPoint();  
// 메모리 할당받아 좌표 구조체의 x,y 값을 입력받아 이 주소값을 리턴함

//두 좌표 사이의 거리 계산은 다음 함수를 만들어 사용하되
//계산 방법은 (x값의 차이)2+(y값의 차이)2의 제곱근이다.

float calcDistance(struct st_point* p1, struct st_point* p2); 
// 두 점의 거리 구하는 함수

int main() {
  struct st_point* point1; 	// 첫번째 좌표를 위한 포인터
  struct st_point* point2; 	// 두번째 좌표를 위한 포인터
  
  point1 = getPoint();
  point2 = getPoint();
  
  float distance = calcDistance(point1, point2);
  
  printf("%.1f", distance);
  return 0;
}

struct st_point* getPoint(){
    struct st_point* point = (struct st_point*)malloc(sizeof(struct st_point));
    
    scanf("%f %f", &point->x, &point->y);
    return point;
}

float calcDistance(struct st_point* p1, struct st_point* p2){
    return sqrt(pow((p1->x - p2->x),2)+pow((p1->y - p2->y),2));
}
