#include <stdio.h>
// 학번, 이름 Student ID, Name
//22400719, 차주호
// 아너코드 선언 Honor code
//나 차주호는 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.
// 이곳에 생각을 적을 것! Your thoughts here!
//크기 입력받기
//for(int i=0; i<size; i++)
//size만큼 반복을 하는데
//=은 size*2만큼 그리고
//화살표는 <를 그리는데 arrow라는 변수 사용해서그리기 Larrow++; Rarrow++;
//그림은 왼쪽 가운데 오른쪽으로 나누고 그 안에서 ++일때랑 --일때 구분


int main(){
	int size; // 방향, 크기
	scanf("%d", &size);
	int blank=size/2;
	int Larrow=1, Rarrow=1;
	//위쪽
    for(int i=0; i<(size*2-1)/2; i++){
        
        //왼쪽
        for(int j=0; j<blank; j++){
            printf(" ");
        }blank--;
        for(int j=0; j<Larrow; j++){
            printf("<");
        }
        //중간
        if(i<(size*2-1)/2){
            for(int j=0; j<size*2; j++){
            printf(" ");
            }
        }
        else{
            for(int j=0; j<size*2; j++){
                printf("=");
            }
        }
        //오른쪽
        for(int j=0; j<Rarrow; j++){
            printf(">");
        }
        for(int j=0; j<blank; j++){
            printf(" ");
        }
        blank++;
        Rarrow++;
        Larrow++;
    printf("\n");
    }
        
        //아래쪽
    for(int i=(size*2-1)/2; i<size*2-1; i++){
        
        //왼쪽
        for(int j=0; j<blank; j++){
            printf(" ");
        }blank--;
        for(int j=0; j<Larrow; j++){
            printf("<");
        }
        //중간
        if(i>(size*2-1)/2){
            for(int j=0; j<size*2; j++){
            printf(" ");
            }
        }
        else{
            for(int j=0; j<size*2; j++){
                printf("=");
            }
        }
        //오른쪽
        for(int j=0; j<Rarrow; j++){
            printf(">");
        }
        for(int j=0; j<blank; j++){
            printf(" ");
        }
        blank++;
        Rarrow--;
        Larrow--;
    printf("\n");
    }
    
    
    return 0;
}
