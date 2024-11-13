#include <stdio.h>
#include <math.h>

struct point{ 
 float x; // x좌표 값 
 float y; // y좌표 값 
};

float calcDistance(struct point p1, struct point p2); // 두 점의 거리 구하는 함수 
//지금 p1과 p2에 x, y값이 들어가 있는거임.
int main() {
    struct point p1, p2;
    
    
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    
    float distance = calcDistance(p1, p2);
    
    printf("%.1f", distance);
    
  return 0;
}


float calcDistance(struct point p1, struct point p2){
    float result = sqrt(pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2));
    
    return result;
}
