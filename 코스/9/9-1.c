#include <stdio.h>
void askHW(float* h, float* w);

int main() {
  float height, weight, bmi;
  int count=0;
  for(int i=0;i<5;i++){
    askHW(&height, &weight);
    bmi = weight / (height*height);
    if (bmi > 25) count++;
  }
  printf("%d\n", count);
  return 0;
}

void askHW(float* h, float* w){
    float height;
    float weight;
    scanf("%f %f", &height, &weight);
    *h = height/100.0; //나누기 연산은 정의할때 못쓴다. 
    *w = weight;
}
