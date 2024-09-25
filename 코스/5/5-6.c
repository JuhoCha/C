#include <stdio.h>
int main(){
  int jumsu[5][3]; 			// 5명의 3과목 점수를 저장하고 있는 2차원 배열 
  int sum_student[5]={0}=0; 			// 학생별 총점
  float average_student[5]; 		// 학생별 평균
  char grade[5]; 				// 학생별 등급 
  int sum_class[3]={0}=0; 			// 과목별 총점
  float average_class[3]; 		// 과목별 평균
  int i, j;  					// 반복문을 위한 변수


for(i=0; i<5; i++){
    for(j=0; j<3; j++){
    scanf("%d", &jumsu);
    }
    sum_student[5]+=jumsu[i][3];
    sum_class[3]+=jumsu[5][i];
}
average_student[5]=sum_student[5]/5;
average_class[5]=sum_class[3]/3;

printf("1) The total and average scores for each subject");
for(i=0; i<3; i++){
    printf("Korean - Total %d, Average %.1f\n", &sum_class[i], &average_class);
    printf("English - Total %d, Average %.1f\n", &sum_class[i], &average_class);
    printf("Math - Total %d, Average %.1f\n", &sum_class[i], &average_class);
}

printf("2) The total and average scores for each student, along with the grade based on their average score.");
for(i=0; i<5; i++){
    printf("Student %d - Total %d, Average %.1f (Grade B)", &i+1, &sum_student[i], &average_student[i+1]);
}



  return 0;
}
