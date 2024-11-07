#include <stdio.h>
float evalBmi(float h, float w);

int main() {
  float height, weight, bmi;
  int count=0;
  int i=0;

  // 이 곳에 코드를 작성하라.
  FILE* file;
  file = fopen("data.txt","r");
  while(fscanf(file, "%f %f", &height, &weight)==2){
      i++;
      bmi = evalBmi(height, weight);
      printf("%d번째 사람 : %.f %.f\n", i, height, weight);
      
  
      if(bmi>=25){
          count++;
      }
  }
    
  
  printf("총 %d명\n", count);
  fclose(file);
  return 0;
}

float evalBmi(float h, float w){
   float bmi = w/(h*h*0.0001);
   
   return bmi;
}
