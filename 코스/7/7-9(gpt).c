#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
학생 5명의 국어, 영어, 수학 점수를 50~100 사이의 점수를 임의로 만들어 저장한 후에, 다음 항목들을 계산하여 출력하라.
각 과목별 총점과 평균 점수
각 학생별 총점과 평균점수, 평균에 따른 등급
등급은 다음과 같은 기준으로 결정하라.
평균 90이상 : A
평균 80이상 ~ 90미만 : B
평균 70이상 ~ 80미만 : C
평균 60이상 ~ 70미만 : D
평균 60미만 : F
*/

int main(void){
  int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  char classname[3][20]={"국어","영어","수학"};
  int sum_student[5];         // 학생별 총점
  float average_student[5];   // 학생별 평균
  char grade[5];              // 학생별 등급 
  int sum_class[3];           // 과목별 총점
  float average_class[3];     // 과목별 평균
  srand(time(0));
  int i, j=0;
  
  for(i=0; i<5; i++){
      for(j=0; j<3; j++){
          
        jumsu[i][j] = rand() % 51 + 50;
        sum_student[i] += jumsu[i][j];   // 학생별 총점 계산
        sum_class[j] += jumsu[i][j];     // 과목별 총점 계산
    
      }
      average_student[i] = sum_student[i] / 3.0;
  }
  
  for(int i = 0; i < 5; i++) {
        if(average_student[i] >= 90)
            grade[i] = 'A';
        else if(average_student[i] >= 80)
            grade[i] = 'B';
        else if(average_student[i] >= 70)
            grade[i] = 'C';
        else if(average_student[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }
    
    for(int j = 0; j < 3; j++) {
        average_class[j] = sum_class[j] / 5.0;
    }
    
    printf("1) The total and average scores for each subject\n");
    for (j = 0; j < 3; j++) {
        average_class[j] = sum_class[j] / 5.0;
        printf("%s - Total %d, Average %.1f\n", classname[j], sum_class[j], average_class[j]);
    }

    // 학생별 총점, 평균 및 등급 출력
    printf("2) The total and average scores for each student, along with the grade based on their average\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d - Total %d, Average %.1f (Grade %c)\n", i + 1, sum_student[i], average_student[i], grade[i]);
    }
  

  return 0;
}
