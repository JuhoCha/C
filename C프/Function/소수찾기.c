// Online C compiler to run C program online
#include <stdio.h>
//1과 자기자신 외에 약수를 가지지 않음. 
int is_prime(int n){
    int num;
    if(n<=1){
        return 0;
    }else{
    for(int i=2; i*i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    }
}

int main(){
    int i=0; 
    int count=0; 
    for(i=0; i<100; i++){
        if(is_prime(i)==1){
            count++;
        }
    }printf("%d", count);
    return 0;
}
