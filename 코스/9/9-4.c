#include <stdio.h>
float bmiFromHW(float* h, float* w);

int main() {
	float height, weight, bmi;
	int count=0;
	for(int i=0;i<5;i++){
		bmi = bmiFromHW(&height, &weight);
		if (bmi > 25) {
			printf("Person %d is obese.\nHeight: %.2fm, Weight: %.1fkg\n",i+1, height, weight);
			count++;
		}
	}
	printf("Total number of obese people is %d.\n", count);
	return 0;
}

float bmiFromHW(float* h, float* w){
	float bmi;
	//bmi 공식 써야됨 그리고 입력 받는 부분도 써야됨
	
	scanf("%f %f", h, w);//이미 포인터 설정이 돼있어서 &필요 x
	*h = *h / 100;//여기 안에서 설정.
	
	bmi = *w / ((*h) * (*h));
	
	return bmi;
}
