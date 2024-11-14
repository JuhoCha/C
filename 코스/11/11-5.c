#include <stdio.h>

struct st_score{
 char name[10]; 		// Name 
 int score[3]; 			// Score (C, Java, Python)
 int sum; 			// Total
 float avg; 			// Average
};

void findtop(int count, struct st_score s[], int each[3]);
//구조체 쓸땐 겹치는 변수 다 가져다 버려야 하고, array도 구조체걸로 해야함 ㅈㄴ 복잡하네 스바아알 

int main() {
  char pname[3][10]={"C", "Java", "Python"};
  //char name[20][30]; // 이름 (최대 20명)
  //int score[3][20]; // 3과목 점수 (최대 20명)
  //int sum[20]; // 총점 (최대 20명)
  //float avg[20]; // 평균 (최대 20명)
  
  struct st_score s[20];
  
  int max, min;
  char line[100];
  int count=0;
  float subject_sum[3]={0};
  float subject_avg[3]={0};
  float person_sum[3]={0};
  float person_avg[3]={0};
  
  int each[3]={0};
  
  FILE *data;
  data = fopen("data.txt", "r");
  
  while (fscanf(data, "%s %d %d %d", s[count].name, &s[count].score[0], &s[count].score[1], &s[count].score[2]) == 4) {
        s[count].sum = s[count].score[0] + s[count].score[1]+s[count].score[2];//총점
        s[count].avg = s[count].sum/3.0;//평균
        count++;
    }
    fclose(data);
  
  for (int i = 0; i < count; i++) {
        for (int j = 0; j < 3; j++) {
            subject_sum[j] += s[i].score[j];
        }
    }
  for (int j = 0; j < 3; j++) {
        subject_avg[j] = subject_sum[j] / count;
    }
  
  

  findtop(count, s, each);
  
  printf("%d records read.\n", count);
  for(int i=0; i<count; i++){
      printf("%s %d %d %d %d %.1f\n", s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].sum, s[i].avg);
  }
  for(int i=0; i<3; i++){
      printf("%s - average : %.1f, Top : %s (%d)\n", pname[i], subject_avg[i], s[each[i]].name, s[each[i]].score[i]);
  }
  

  return 0;
}

void findtop(int count, struct st_score s[], int each[3]){
    for(int i=0; i<3; i++){
        each[i] = 0;
        for(int j=0; j<count; j++){
            if(s[j].score[i]>s[each[i]].score[i]){
                each[i] = j;
            }
        }
    }
}


