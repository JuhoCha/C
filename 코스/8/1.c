#include <stdio.h>

//사람 수 입력 --> scanf해서 사람 수 입력하고 카운트
//그 수만큼 년도 입력하기 --> 년도 입력하고 현재년도에서 빼서 나이 구하고 
//구간 나눠서 구간 구분하고 그만큼 카운트++
int ageToGroup(int b);
int count_person();
int birth_year(int num, int year[100]);

int main() {
    int year[100]; 			// 각 사람들의 생년 (최대 100명) 내가 입력한 년도
    int count[6] = {0}; 			// 6가지 연령대별 숫자 각 연령층에 몇명인지 말함.
    
    int num = count_person(); 		// 입력된 인원 수 입력한 수 
    birth_year(num, year);
    
    for(int i = 0; i<num; i++) {  // 저장된 num 사용
        int age = 2024 - year[i]; //year[i]에다가 b값 저장
        int ageGroup = ageToGroup(age);
        count[ageGroup]++;
        printf("Age of person %d is %d\n", i+1, age); // 나이 출력 부분
    }
    
    printf("The number of infant is %d\n", count[0]);
    printf("The number of child is %d\n", count[1]);
    printf("The number of teenager is %d\n", count[2]);
    printf("The number of young adult is %d\n", count[3]);
    printf("The number of middle-aged is %d\n", count[4]);
    printf("The number of elderly is %d\n", count[5]);
    
    return 0;
}

int ageToGroup(int b){
    if(b < 7){
        return 0;
    } else if(b < 13){
        return 1;
    } else if(b < 20){
        return 2;
    } else if(b < 30){
        return 3;
    } else if(b < 60){
        return 4;
    } else {
        return 5;
    }
}

int count_person(){
    int num;
    scanf("%d", &num);
    return num;
}

int birth_year(int num, int year[100]){
    for(int i=0; i<num; i++){
        scanf("%d", &year[i]);
    }
}
