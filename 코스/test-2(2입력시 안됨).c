#include <stdio.h>
// 학번, 이름 Student ID, Name
//22400719, 차주호

// 아너코드 선언 Honor code
//나 차주호는 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.
// 이곳에 생각을 적을 것! Your thoughts here!
//방향과 크기 입력받기 
//반복문으로 크기만큼 화살표 찍기  
//조건문 사용해서 1일때 오른쪽 2일때 왼쪽 화살표 나오게 
//만약 1이라면 blank는 size만큼 커졌다가 작아지기
//만약 2라면 blank는 size만큼 작아졌다가 커지기


int main(){
	int direction, size; // 방향, 크기
	scanf("%d %d", &direction, &size);
    
    int blank = 0;
    
    for(int i=0; i<4; i++){
        if(direction==1){
            for(int j=0; j<blank; j++){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" >");
            }
            blank++;
        }
        if(direction==2){
            blank = size/2;
            for(int j=blank; j<=0; j--){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" <");
            }
            blank--;
        }
        printf("\n");
    }
    
        
    for(int i=4; i<4; i++){
        if(direction==1){
            for(int j=0; j<blank; j++){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" >");
            }
            
        }
        if(direction==2){
            for(int j=0; j<blank; j++){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" <");
            }
        }
    }
    for(int i=5; i<10; i++){
        if(direction==1){
            for(int j=0; j<blank; j++){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" >");
            }
            blank--;
        }
        if(direction==2){
            for(int j=0; j<blank; j++){
                printf(" ");
            }
            for(int j=0; j<size; j++){
                printf(" <");
            }
            blank++;
        }
        printf("\n");
    }
    
        
    
    
    return 0;
}
