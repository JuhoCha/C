#include <stdio.h>

struct st_user {
 char userid[20];
 char userpw[20];
};

void people(struct st_user p[]);

int main() {
    
    struct st_user p[20];
    
    // 수정 금지(아래 코드)
    FILE* fp = fopen("user.txt", "r");
    char sent[100];
    printf("등록된 사용자 목록\nNo ID   Password\n");
    for(int no = 1; fgets(sent, 100, fp) != NULL; no++)
        printf("%-2d %s", no, sent);
    fclose(fp);
    // 수정 금지(위 코드)
    
    
    for(int i=0; i<10; i++){
        //printf("%d %s %s\n",i+1, p[i].userid, p[i].userpw);
    }
    

    
    return 0;
}

void people(struct st_user p[]){
    for(int i=0; i<10; i++){
        scanf("%s %s", p[i].userid, p[i].userpw);
    }
}
