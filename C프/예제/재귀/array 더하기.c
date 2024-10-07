#include <stdio.h>

int array_sum(int a[], int n)
{
	if(n==0){
	    return 0;
	}else{
	    return array_sum(a, n-1)+a[n-1]; //여기에서 n-1안해주면 a[n-1]하다보면 a[-1]되서 segmentation뜸
	}
}

int main()
{
	int n; int a[100];//array는 그 크기를 정해줘야 하는데 뭐 따로 정해진거 없으면 최소는 -1, 최대는 100이니까 그렇게 알아서 지정
    scanf("%d",&n); 
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int result = array_sum(a, n); //여기서는 n-1 하면 하나를 빼고 출력하게 되니까 n까지 모두 더하려면 그라믄 안된다!
    printf("%d\n", result);
    
    
    
    return 0;
}
