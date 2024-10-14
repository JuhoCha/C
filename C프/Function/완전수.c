// Online C compiler to run C program online
#include <stdio.h>

int is_perfect(int n){
    int sum=0;
    if(n<=1){
        return 0;
    }else{
        for(int i=1; i<n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
    }
    return (sum==n) ? 1:0;
}

int main(){
    int i=0; 
    int count=0; 
    for(i=0; i<100; i++){
        if(is_perfect(i)==1){
            count++;
        }
    }printf("%d", count);
    return 0;
}
