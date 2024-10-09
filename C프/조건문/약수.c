// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i;
    int n;
    
    scanf("%d", &n);
    
for(int k=1; k<=n; k++){ //1부터 계산해줘야 하고 0부터 하면 오류난다. 자기 자신까지 프린트 하려면 범위 조정 해줘야함
    if(n%k==0){
        printf("%d ", k);
    }
}

    return 0;
}
