#include <stdio.h>

int even_sum(int n)
{
	if(n==0){
	    return 0;
	}else{
	    if(n%2==0){
	        return n+even_sum(n-1); //짝수 더하기 
        //이렇게 해줘야 n의 값 들어가는 거고 even_sum(n-1)은 다음 수로 넘어간다는 거
	    }else{
	        return even_sum(n-1); //홀수 더하기 
	    }
	}
}

int main()
{
	int n; 
    scanf("%d",&n); 
    int result = even_sum(n);
    printf("%d\n", result);
    
    return 0;
}
