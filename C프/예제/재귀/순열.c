#include <stdio.h>

int permutaion(int n, int m)
{
	if(m==0){
	    return 1;
	}else{
	    return n=n*permutaion(n-1, m-1);
	    
	}
}

int main()
{
	int n; int m;
    scanf("%d",&n); scanf("%d",&m);
    int result = permutaion(n, m);
    printf("%d\n", result);
    
    return 0;
}
