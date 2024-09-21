#include <stdio.h>

int main(){
  int birth_year; 			// 입력받은 태어난 년도
  int year[100]; 			// 각 사람들의 생년 (최대 100명) 
  int count_person; 		// 입력된 인원 수
  int count_baby=0; 		// 유아 수
  int count_child=0; 			// 어린이 수
  int count_youth=0; 		// 청소년 수
  int count_young=0; 		// 청년 수
  int count_adult=0; 		// 중년 수
  int count_old=0; 			// 노년 수
  int i; 				// 반복문을 위한 변수
  
  
  //사람수 몇명 입력 받을지 year 변수 써서 하고
  //birth_year할때 year수만큼만 반복해서 계속 물어보게
  //count_person ++ 해서 몇번째인지 카운트해주고
  //나이 = 올해년도 – 태어난 년도 해서 나이 찾아주고
  //연령대 구분해서 해당 연령대 ++해주기
  //The age of the %dth person is %d로 프린트 반복
  //반복해주다가 year수만큼 했으면 Infants: 0
    // Child: %d
    // Teenager: %d
    // Young adult: %d
    // Middle aged: %d
    // Elderly: %d 해주기
//       age < 7: Infant
//  7 <= age < 13: Child
// 13 <= age < 20: Teenager
// 20 <= age < 30: Young adult
// 30 <= age < 60: Middle aged
// 60 <= age: Elderly
  
  scanf("%d", &year[100]); //변수쓸때 array면 array space까지 적어주기
  
  
  
  for(i=0; i<year[100]; i++){
      scanf("%d", &birth_year);
      int age = 2024 - birth_year;
      
      
      if(age<7){
          count_baby++;
      }
      else if(age<13){
          count_child++;
      }
      else if(age<20){
          count_youth++;
      }
      else if(age<30){
          count_young++;
      }
      else if(age<60){
          count_adult++;
      }
      else {
          count_old++;
      }
      
      
      
      count_person ++ ;
      printf("The age of the %dth person is %d\n", count_person, age);
  }
        printf("Infants: %d\n", count_baby);
        printf("Child: %d\n", count_child);
        printf("Teenager: %d\n", count_youth);
        printf("Young adult: %d\n", count_young);
        printf("Middle aged: %d\n", count_adult);
        printf("Elderly: %d\n", count_old);
  


  return 0;
}
