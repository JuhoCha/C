#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 			// 입력받은 문자열 
    char reverse[100]; 		// 순서를 거꾸로 바꾼 문자열
    
    //일단 문자 입력받은거 저장해야함
    //저장하고 저장되었다면 그걸 for이나 반복문으로 --해서 할 수 있지 않을가
    //아니면 복사하는 strcpy 해서 
    
    fgets(str, 100, stdin);
    str[strlen(str) - 1];
    strcpy(reverse, str);
    
    
    for(int i=strlen(str)-1; i>=0; i--){
        printf("%c", reverse[i]);//%c는 문자 하나씩 출력하니까 적합
    }
 
    
    
    return 0;
}
