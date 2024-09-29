#include <stdio.h>
#include <string.h>
#define yes 0//존재
#define no 1//존재 xx

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
  
  
  
  while(1){
      fgets(id, 20, stdin);
    //   if(strcmp(id[5][20], username[5][20])==1){
    //       printf("No such ID exists");
    //   }
    id[strcmp(id, )]
      fgets(pw, 20, stdin);
      if(strcmp(pw[5][20], password[5][20])==1 && strcmp(id[5][20], username[5][20])==0 ){
          printf("ID is correct, but the password is incorrect");
      }
      if(strcmp(id[5][20], username[5][20])==0 && strcmp(pw[5][20], password[5][20])==0){
          printf("Login successful");
      }break;
  }

  return 0;
}
