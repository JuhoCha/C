#include <stdio.h>
#include <string.h>

int main(void) {
  //회문 비교해야 하는데
  // 회문은 sns처럼 중간 기준으로 앞뒤가 똑같은거다
  //입력받는 문장에서 알파벳만 골라서 새로운 문자열 만들고
  //이 문자열에 대해 양쪽 끝에서 가운데까지 각각의 모든 문자가 같은지
  
  char alpha[100];  
    char a_save[100];
    char reverse[100];
    int alphalen = 0; 
    int i;

   
    fgets(alpha, sizeof(alpha), stdin);
   

   
    for(i = 0; alpha[i] != '\0'; i++) {
        if((alpha[i] >= 'a' && alpha[i] <= 'z') || (alpha[i] >= 'A' && alpha[i] <= 'Z')) {
            a_save[alphalen] = alpha[i];
            alphalen++; 
        }
    }
    a_save[alphalen] = '\0';

   
    for(i = 0; i < alphalen; i++) {
        reverse[i] = a_save[alphalen - 1 - i];
    }
    reverse[alphalen] = '\0'; 


    if(strcmp(a_save, reverse) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
  
  return 0;
}
