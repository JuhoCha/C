// Online C compiler to run C program online
#include <stdio.h>

int is_even(int n){
    if(n%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int i=0; 
    int count=0; 
    for(i=0; i<100; i++){
        if(is_even(i)==1){
            count++;
        }
    }printf("%d", count);
}
