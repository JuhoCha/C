#include <stdio.h>
#include <string.h>

void reverseString(char* str); 

int main() {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    reverseString(str);
    printf("%s\n", str);

  return 0;
}

void reverseString(char* str){
    
    int length = strlen(str);
    for(int i = 0; i < length / 2; i++) {
        char temp = str[i]; // temp써서 저장
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
   
}
