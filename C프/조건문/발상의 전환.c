#include <stdio.h>

int main() {
    int k;
    
    for(k=1000; k>1; k--){ //1000까지의 짝수 중 3의 배수 중 가장 큰 수
    	if((k%2==0)&&(k%3==0)){
    		break;
        }
    }

    printf("%d", k);

    return 0;
}
