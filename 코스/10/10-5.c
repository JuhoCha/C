#include <stdio.h>

void findtop(int count, char name[20][30], int score[3][20], int each[3]);

int main() {
  char pname[3][10]={"C", "Java", "Python"};
  char name[20][30]; // 이름 (최대 20명)
  int score[3][20]; // 3과목 점수 (최대 20명)
  int sum[20]; // 총점 (최대 20명)
  float avg[20]; // 평균 (최대 20명)
  
  int max, min;
  char line[100];
  int count=0;
  float person_sum[3]={0};
  float person_avg[3]={0};
  
  int each[3]={0};
  
  FILE *data;
  data = fopen("data.txt", "r");
  
  while (fscanf(data, "%s %d %d %d", name[count], &score[0][count], &score[1][count], &score[2][count]) == 4) {
        count++;
    }
    fclose(data);
  
  for(int i=0; i<count; i++){
    sum[i] = score[0][i] + score[1][i] + score[2][i];
  }
  for(int i=0; i<count; i++){
    avg[i] = sum[i]/3.0;
  }
  
  
  for(int i=0; i<3; i++){
      for(int j=0; j<count; j++){
        person_sum[i]+=score[i][j];
      }
      person_avg[i]=person_sum[i]/count;
  }
  
  findtop(count, name, score, each);
  printf("%d records read.\n", count);
  for(int i=0; i<count; i++){
      printf("%s\t%d  %d  %d  %d  %.1f\n", name[i], score[0][i], score[1][i], score[2][i], sum[i], avg[i]);
  }
  for(int i=0; i<3; i++){
      printf("%s - average : %.1f, Top : %s (%d)\n", pname[i], person_avg[i], name[each[i]], score[i][each[i]]);
  }
  

  return 0;
}

void findtop(int count, char name[20][30], int score[3][20], int each[3]){
    for(int i=0; i<3; i++){
        each[i] = 0;
        for(int j=0; j<count; j++){
            if(score[i][j]>score[i][each[i]]){
                each[i] = j;
            }
        }
    }
}



