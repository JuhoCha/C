//어떤 주어진 일자(y년 m월 d일)의 ‘다음 날’ 을 구하는 프로그램을 작성하시오. (2월은 28일로 가정)
#include <stdio.h>

 int main() {
    int year;
    int month;
    int days;

    scanf("%d %d %d", &year, &month, &days);

     switch(month){
      case 12:
        if(days>=31){
         year++;
         month = 1;
         days = 1;
        }else{
         days++;
        }break;
      case 11: case 9: case 6: case 4: 
        if(days>=30){
            month++;
            days=1;
         }else{
            days++;
         }break;
      case 2: 
         if(days>=28){
            month++;
            days=1;
         }else{
            days++;
         }break;
      default:
         if(days>=31){
            month++;
            days=1;
         }else{
            days++;
         }break;
        
     }
     
     printf("%d %d %d\n", year, month, days);

     return 0;
 }
