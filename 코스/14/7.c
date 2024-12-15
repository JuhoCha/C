#include <stdio.h>
#include <string.h>

void rPrint(char* str){
    if (*str == '\0') {
        return;
    }

    rPrint(str + 2);

    if (str[0] != '\0'){
        printf("%c", toupper(str[0])); 
    }
    if (str[1] != '\0'){
        printf("%c", toupper(str[1]));  
    }
}

int main() {
  char str[80];
  fgets(str, 80, stdin);
  str[strlen(str)-1]='\0';
  rPrint(str);
  printf("\n");
  return 0;
}
