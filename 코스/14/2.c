#include <stdio.h>

int powerOfTwo(int n){
    if(n==0){
        return 1;
    }
    return 2*powerOfTwo(n-1);
    
}

int main(){
    int count;
    scanf("%d", &count);
    
    int num[count];
    for (int i=0; i<count; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int i=0; i<count; i++) {
        printf("%d\n", powerOfTwo(num[i]));
    }
    
    return 0;
}
