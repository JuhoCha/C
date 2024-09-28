#include <stdio.h>
#include <string.h>

int main() {
    char userid[30];         
    char password[30]; 
    char name[30]; 
    

   
    
    scanf("%s", userid);
    scanf("%s", password);

    if(strlen(password)<3){
        //문자열 계산하는 strlen변수로 비밀번호 갯수 카운트
        printf("The password must be at least 3 characters long.");
        return 1;
        //return 0은 정상 종료, return 1은 비상종료
    }

    
    getchar(); 
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    
    int passwordLength = strlen(password);
    for (int i = 2; i < passwordLength; i++) {
        password[i] = '*';
    }
    

    printf("User Id: %s\n", userid);
    printf("Password: %s\n", password);
    printf("User Name: %s\n", name);    
 
 
    return 0;
}
