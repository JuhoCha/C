#include <stdio.h>

void people(char userid[10][20], char userpw[10][20]);

int main() {
  char userid[10][20];
  char userpw[10][20];
//w로 쓰기 해야하려나
FILE *file = fopen("user.txt", "w");


printf("List of registered users\n");
printf("No ID   Password\n");
people(userid, userpw);
for(int i=0; i<10; i++){
    
        printf("%d %s %s\n",i+1, userid[i], userpw[i]);
        fprintf(file, "%s %s\n", userid[i], userpw[i]);
    
}
printf("Stored at 'user.txt' file.\n");

fclose(file);
  return 0;
}

void people(char userid[10][20], char userpw[10][20]){
    for(int i=0; i<10; i++){
        
        scanf("%s %s", userid[i], userpw[i]);
        
    }
}
