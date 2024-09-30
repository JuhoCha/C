#include <stdio.h>
#include <string.h>


int main() {
//로그인 성공
//--> 아이디가 배열에 있고 아이디의 배열과 비번 배열이 같으면
//아이디는 맞는데 비번이 틀림
//--> 아이디가 배열에 있고 비밀번호가 틀리면
//--> "ID is correct, but the password is incorrect"
//그런 아이디가 없음
//--> 아이디가 배열에 없으면 "No such ID exists"
  char username[5][20]={"kim", "lee", "park", "hong", "choi"};
  char password[5][20]={"1111", "1234", "3456", "3535", "7777"};
  char id[20];
  char pw[20];
  
  int i; 
  
  scanf("%s", id);
  scanf("%s", pw);
  
  for(i=0; i<5; i++){
      
      if(strcmp(id, username[i])==0){//0이걸로 같음 확인
          if(strcmp(pw, password[i])==0){
                printf("Login successful");
          }else{
                printf("ID is correct, but the password is incorrect");
          }
          return 0;
      }
  }
  
    printf("No such ID exists");

  return 0;
}
