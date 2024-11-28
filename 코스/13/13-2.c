#include <stdio.h>
#include <stdlib.h>

//몇번째가 어느 사분면에 위치하는지 
//몇개가 어느 사분면이나 axis에 위치하는지 
struct st_point{ 
  float x; // x
  float y; // y
};

int getPosition(struct st_point* p);
struct st_point* getPoints();//메모리 할당받아 좌표 구조체의 x,y 값을 입력받아 이 주소값을 리턴함

int main(){
	struct st_point* mypoint[10]; 
	int count_axis = 0, count_q1 = 0, count_q2 = 0, count_q3 = 0, count_q4 = 0;
	
	for (int i = 0; i < 10; i++) {
        mypoint[i] = getPoints(); // 각 점의 메모리를 동적으로 할당받아 초기화
    }
    
    for (int i = 0; i < 10; i++) {
        int pos = getPosition(mypoint[i]);
        if(pos==0){
            printf("%d coordinate: Located in(on) the axis.\n", i + 1);
        }else{
            printf("%d coordinate: Located in(on) the %d quadrant.\n", i + 1, pos);
        }
        if (pos == 0) {
            count_axis++;
        } else if (pos == 1) {
            count_q1++;
        } else if (pos == 2) {
            count_q2++;
        } else if (pos == 3) {
            count_q3++;
        } else if (pos == 4) {
            count_q4++;
        }
    }

    printf("There is(are) %d coordinate(s) in(on) the axis.\n", count_axis);
    printf("There is(are) %d coordinate(s) in(on) the 1 quadrant.\n", count_q1);
    printf("There is(are) %d coordinate(s) in(on) the 2 quadrant.\n", count_q2);
    printf("There is(are) %d coordinate(s) in(on) the 3 quadrant.\n", count_q3);
    printf("There is(are) %d coordinate(s) in(on) the 4 quadrant.\n", count_q4);
		
	return 0;
}

int getPosition(struct st_point* p){
    if (p->x > 0 && p->y > 0) { // 1사분면
        
        return 1;
    } else if (p->x < 0 && p->y > 0) { // 2사분면
        
        return 2;
    } else if (p->x < 0 && p->y < 0) { // 3사분면
       
        return 3;
    } else if (p->x > 0 && p->y < 0) { // 4사분면
      
        return 4;
    } else { // 축
     
        return 0;
    }
}

struct st_point* getPoints(){
    struct st_point* p = (struct st_point*)malloc(sizeof(struct st_point));
    
    scanf("%f", &p->x);
    scanf("%f", &p->y);
    
    return p;
}

