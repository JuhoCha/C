#include <stdio.h>
void sort3Num(int* n1, int* n2, int* n3); 

int main() {
  int num1, num2, num3;
  scanf("%d %d %d", &num1, &num2, &num3);
  sort3Num(&num1, &num2, &num3);
  printf("%d %d %d\n", num1, num2, num3);
  return 0;
}

void sort3Num(int* n1, int* n2, int* n3){
    int temp; //temp써서 포인터 활용해야하는데 포인터는 주소값 받아오는 거니까 
    
    if(*n1<*n2){
        temp=*n1; //n1값 받아오고 
        *n1=*n2; //n2값 받아오고
        *n2=temp; //n2에는 temp 값 받아오면 n1 n2값 서로 바뀌게 된다. 
    }
    if(*n1<*n3){
        temp=*n1;
        *n1=*n3;
        *n3=temp;
    }
    if(*n2<*n3){
        temp=*n2;
        *n2=*n3;
        *n3=temp;
    }
}
