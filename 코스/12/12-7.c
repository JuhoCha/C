#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_user{
 char userid[20];
 char userpw[20];
};
struct st_user* getUser();

int main() {
    struct st_user* a;

    a = getUser();
    printf("User ID: %s\n", a->userid);
    printf("Password: ");
    for(int i=0; i<strlen(a->userpw); i++){
        if(i<2)
            printf("%c", a->userpw[i]);
        else
            printf("*");
    } printf("\n");
  return 0;
}

struct st_user* getUser(){
    struct st_user* temp;
    
    temp = (struct st_user*)malloc(sizeof(struct st_user));
    
    while(1){
        printf("User ID? ");
        scanf("%s", temp -> userid);
        if(strlen(temp->userid)>=4)
            break;
        printf("-> Enter more than 4 letters\n");
    }
    while(1){
        printf("Password? ");
        scanf("%s", temp -> userpw);
        if(strlen(temp->userpw)>=4)
            break;
        printf("-> Enter more than 4 letters\n");
    }
    
    return temp; //return 해주기
}
