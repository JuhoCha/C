#include <stdio.h>

int sum(int n)
{
	if(n==1){
	    return n=1;
	}else{
	    return n=n+(n-1);
	}
}

int main()
{
	int n;
    scanf("%d",&n);
    int result = sum(n);
    printf("%d\n", result);
    
    return 0;
}
