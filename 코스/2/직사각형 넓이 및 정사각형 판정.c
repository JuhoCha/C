#include <stdio.h>

int main() {
  int width, height;  // 가로크기, 세로크기 
  int area;           // 사각형의 넓이

  scanf("%d %d", &width, &height);
  area = width * height;
  
  if(width == height){
    printf("%d\nYes", area);
  }
  else{
    printf("%d\nNo", area);
  }


  return 0;
}
