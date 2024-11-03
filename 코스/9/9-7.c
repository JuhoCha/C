#include <stdio.h>

int which_first(char * str1, char * str2);

int main() {
    char str1[100], str2[100];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int result = which_first(str1, str2); //입력받기 전에 선언되면 오류
    //which_first쓰려면 저렇게 선언해서 불러오는 형식으로
    if(result==1){
        printf("The first string comes first in the dictionary.\n");
    }else if(result==-1){
        printf("The second string comes first in the dictionary.\n");
    }
    
  return 0;
}

int which_first(char * str1, char * str2){
    
    while(*str1 != '\n' && *str2 != '\n'){    
        char ch1 = *str1;
        char ch2 = *str2;
        
        if(ch1>='A'&&ch1<='Z'){
            ch1 = ch1 + 32; //char 이니까
        }
        if(ch2>='A'&&ch2<='Z'){
            ch2 = ch2 + 32;
        }
        
        if (ch1 != ch2) {
            return (ch1 < ch2) ? 1 : -1;
        }
        str1++;
        str2++;
    }
        
}
   
    
    
