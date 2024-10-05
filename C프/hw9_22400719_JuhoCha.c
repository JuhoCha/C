// Online C compiler to run C program online
#include <stdio.h>
/*
임의의 월(년도,월)에 대한 달력을 출력하는 프로그램을 작성하시오.

아래의 내용을 참고하여(그대로 이용 또는 변형 가능), Function의 개념을 최대한 활용하여 작성할 것

(단, 년도는 1900년 이후만을 고려함을 가정함)
*/

int  month_days(int y,  int  m);
int  first_day(int  y, int  m);
int isleapyear(int y);
void print_calendar(int  ndays, int  d1, int y, int m);

 

int main(){
    int y, m, ndays, d1;
    scanf("%d %d", &y, &m);
    ndays = month_days(y, m);//monthday값이 ndays에 저장됨
    d1 = first_day(y, m); //1stday 값이 d1에 저장됨
    print_calendar(ndays, d1, y, m);
    //char yoil[7]={"Sun", "Mon", "Tue", "Wen", "Tur", "Fri", "Sat"};
}

int isleapyear(int y){
    if((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)){
        return 1;
    }else{
        return 0;
    }
}

int  month_days(int  y, int  m){
    int ndays = 0;
//. . . . 해당 월의 날짜수를 return
    //해당 년도가 입력되면 1900 1월 1일 월요일에서 출발함
    //달은 
    for(int i=0; i<y; i++){
        if((y%4==0||y%400==0)&&(y%100!=0)){
            switch(m){
                case 2: ndays=29; break;
                case 4: ndays=30;
                case 6: ndays=30;
                case 9: ndays=30;
                case 11: ndays=30; break;
                default: ndays = 31; break;
            }
        }else{
            switch(m){
                case 2: ndays=28; break;
                case 4: ndays=30;
                case 6: ndays=30;
                case 9: ndays=30;
                case 11: ndays=30; break;
                default: ndays = 31; break;
            }
        }
    }
    return ndays;
}

int  first_day(int  y, int  m){
    int totaldays=0;
    
//.  . . . 해당 월의 1일의 요일을 return
    //달의 마지막날 마지막 요일이면 다음달로
    //다음달의 요일은 마지막 요일의 +1로 시작
for(int i=1900; i<y; i++){
    if(isleapyear(i)==1){
        totaldays+=366;
    }else{
        totaldays+=365;
    }
    
}

for(int i=1; i<m; i++){
    totaldays+=month_days(y, i);
}
return (totaldays+1) % 7;
}

void print_calendar(int  ndays, int  d1, int y, int m){
//. . . . 달력을 출력
printf("%dY %dM\n", y, m);
printf("Sun Mon Tue Wed Thur Fri Sat\n");
    
    for(int i = 0; i < d1; i++){
        printf("    "); // 4칸 공백
    }
    for(int day = 1; day <= ndays; day++){
        printf("%4d", day);
        if ((day + d1) % 7 == 0) {
            printf("\n"); 
        }
    }
    printf("\n");
}