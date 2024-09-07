#include <stdio.h>

int main() {
  int width, height; // 가로크기, 세로크기
  int count1=0; // "정사각형"의 개수
  int count2=0; // "가로형 직사각형"의 개수 
  int count3=0; // "세로형 직사각형"의 개수


while(1){
    scanf("%d %d", &width, &height); //while은 else if하면 안내려가네
    if(height == width &&width>0&&height>0){
        count1++;
    }
    if(width>height &&width>0&&height>0){
        count2++;
    }
    if(width<height &&width>0&&height>0){
        count3++;
    }
    if(height<=0 || width<=0) break; //음수일때도 카운트가 적용됨
}

printf("정사각형 %d개\n",  count1);
printf("가로형 직사각형 %d개\n",  count2);
printf("세로형 직사각형 %d개\n",  count3);

  return 0;
}
