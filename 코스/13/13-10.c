#include <stdio.h>
#include <stdlib.h>
struct st_user{
    char userid[20];
    char userpw[20];
};
struct st_user* getUser(); 
void saveUser(struct  st_user* userlist[], int size, char* filename);
struct st_user* getUser(struct st_user* list[], int size);

int main(void) {
    struct st_user* userlist[20]; // 10명의 로그인 데이터 보관용 포인터 배열
    for(int i=0; i<10; i++){
        printf("#%d User\n", i+1);
        userlist[i] = getUser(userlist, i);
    }
    saveUser(userlist, 10, "user.txt");
    return 0;
}


struct st_user* getUser(struct st_user* list[], int size){
   struct st_user* temp;
    
    temp = (struct st_user*)malloc(sizeof(struct st_user));
    
    while(1){
        printf("User ID? ");
        scanf("%s", temp -> userid);
        if(strlen(temp->userid)>=4){
            int duplicate = 0;
            for(int i = 0; i < size; i++){
                if(strcmp(list[i]->userid, temp->userid) == 0) {
                    duplicate = 1;
                    break;
                }
            }
                if(!duplicate){
                        break; // 중복되지 않으면 입력을 종료
                }
        }else{
            printf("-> Enter more than 4 letters\n");
        }
    }
    
    while(1){
        printf("Password? ");
        scanf("%s", temp -> userpw);
        if(strlen(temp->userpw)>=4)
            break;
        printf("-> Enter more than 4 letters\n");
    }
    
    return temp;  
} 


void saveUser(struct  st_user* userlist[], int size, char* filename){
    FILE* file = fopen(filename, "w");
    
    for(int i=0; i<size; i++){
        fprintf(file, "%s %s\n", userlist[i]->userid, userlist[i]->userpw);
    }
    
    fclose(file);
}
