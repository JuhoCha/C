#include <stdio.h>

int askBiman(int height, int weight);
//비만 확인하는 코드 짜려면 입력받고 
//bmi 계산하는 식에 불러옴
//bmi 구간별로 계산하고 
//프린트

int main() {
    int height;
    int weight;
    
for(int i=0; i<10; i++){
    scanf("%d %d", &height, &weight);
    
    int biman = askBiman(height, weight);
    
    if(biman==1){
        printf("Person %d: Underweight\n", i+1);
    }
    if(biman==2){
        printf("Person %d: Normal weight\n", i+1);
    }
    if(biman==3){
        printf("Person %d: Overweight\n", i+1);
    }
    if(biman==4){
        printf("Person %d: Mild obesity\n", i+1);
    }
    if(biman==5){
        printf("Person %d: Severe obesity\n", i+1);
    }
    if(biman==0){
        printf("Person %d: Incorrect input\n", i+1);
    }
}


  return 0;
}

int askBiman(int height, int weight){
    int i;
    
    int bmi = weight / ((height / 100.0) * (height / 100.0));
    if(height<0||weight<0){
        return 0;
    }
    else if(bmi<18.5){
        return 1; //저체중
    }else if(bmi<23){
        return 2; //정상체중
    }else if(bmi<25){
        return 3; //과체중
    }else if(bmi<30){
        return 4; //경도비만
    }else{
        return 5; //고도비만
    }
    
}
