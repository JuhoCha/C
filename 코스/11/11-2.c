#include <stdio.h>

struct rectangle{ 
  int x1, y1; // 좌상점 좌표값 (왼쪽 위 모서리) 
  int x2, y2; // 우하점 좌표값 (오른 아래 모서리) 
};

int checkOverlap(struct rectangle *r1, struct rectangle *r2); 

int main() {
  struct rectangle r1, r2;//직사각형 1, 2에 각각 값이 들어감. 
  
  scanf("%d %d", &r1.x1, &r1.y1);
  scanf("%d %d", &r1.x2, &r1.y2);
  
  scanf("%d %d", &r2.x1, &r2.y1);
  scanf("%d %d", &r2.x2, &r2.y2);
  
  if(checkOverlap(&r1, &r2)){
      printf("Yes\n");
  }else{
      printf("No\n");
  }
  
  
  

  return 0;
}


int checkOverlap(struct rectangle *r1, struct rectangle *r2){
    if(r1->x2 < r2->x1 || r1->x1 > r2->x2 || r1->y2 > r2->y1 || r1->y1 < r2->y2){
        return 0;
    }
    return 1;
    }
