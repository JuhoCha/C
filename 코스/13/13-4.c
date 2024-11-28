#include <stdio.h>
#include <stdlib.h>
struct st_point{ 
    float x; 		// value of x coordinate
    float y; 		// value of y coordinate
}; 
int loadPoints(struct st_point* list[], char* filename); 
//파일로부터 좌표데이터를 읽어들이되 동적 메모리 할당을 해주어야 하며, 
//읽어들인 좌표의 개수를 리턴함
int getPosition(struct st_point* p);
//전달받은 좌표의 위치를 파악하여 위치번호(0~4)를 리턴함

int main(){
    struct st_point* mypoint[50]; // 최대 50개의 좌표 저장용 
    int size; // 좌표 총 개수
    int count[5]={0}; // 좌표위치별 개수 (0:축 좌표 개수, 1~4:1~4분면 좌표 개수)
    size = loadPoints(mypoint, "point.txt");
    printf("Read %d coordinate point(s) from point.txt.\n",size);
    for(int i=0;i<size;i++){
        int pos = getPosition(mypoint[i]);
        count[pos]++;
    }
    for(int i=0; i<5; i++){
        if(i == 0) {
	    printf("There is(are) %d coordinate(s) on(in) the axis.\n",count[i]);
        } else {
            printf("There is(are) %d coordinate(s) on(in) the %d quadrant.\n",count[i],i);
        }
    }

    return 0;
}


int loadPoints(struct st_point* list[], char* filename){
    int count=0;
    FILE *file=fopen(filename, "r");
    
    while(1){
        struct st_point *p = (struct st_point*)malloc(sizeof(struct st_point));
        if (fscanf(file, "%f %f", &p->x, &p->y) == 2) {
            list[count++] = p;
        }else{
            break;
        }
    }
    
    fclose(file);
    
    return count;
}


int getPosition(struct st_point* p){
    if(p->x>0&&p->y>0){
        return 1;
    }else if(p->x<0&&p->y>0){
        return 2;
    }else if(p->x<0&&p->y<0){
        return 3;
    }else if(p->x>0&&p->y<0){
        return 4;
    }else{
        return 0;
    }
}
