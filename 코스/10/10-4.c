#include <stdio.h>

float findMax(float num[], int size);
float findMin(float num[], int size);

int main() {//최대 최소 제외하고 평균
    FILE *data = fopen("data.txt", "r");
    float num[10];
    int min, max;
    float average = 0.0;
    
    for(int i=0; i<10; i++){
        fscanf(data, "%f", &num[i]);
        printf("Judge %d score : %.1f\n", i+1, num[i]);
    }
    findMin(num, 10);
    findMax(num, 10);
    
    for(int i=0; i<10; i++){
        average += num[i];
    }
    printf("Final Score : %.1f", average/8.0);
    
    fopen("data", "r");
    
    
fclose(data);
  return 0;
}
float findMin(float num[], int size){
    int i=0;
    float min = num[0];
    int mincount;
    for(i=0; i<10; i++){
        if(num[i]<min){
            min = num[i];
            mincount = i;
        }
    }num[mincount]=0;
}

float findMax(float num[], int size){
    int i=0;
    float max = num[0];
    int maxcount;
    for(i=0; i<10; i++){
        if(num[i]>max){
            max = num[i];
            maxcount = i;
        }
    }num[maxcount]=0;
}

