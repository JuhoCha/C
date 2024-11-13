#include <stdio.h>
#include <math.h>

struct point{ 
 float x; // x좌표 값 
 float y; // y좌표 값 
};

float calcDistance(struct point p1, struct point p2); // 두 점의 거리 구하는 함수 
//지금 p1과 p2에 x, y값이 들어가 있는거임.
int main() {
    float p1->x; 
    float p1->y;
    float p2->x;
    float p2->y;
    
    calcDistance(p1, p2);
    
    scanf("%f %f", &p1.x, &p2.x);
    scanf("%f %f", &p1.y, &p2.y);
    
  return 0;
}


float calcDistance(struct point p1, struct point p2){
    float *result = sqrt(pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2));
    
    return result;
}
