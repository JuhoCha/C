#include <stdio.h>
#include <string.h>

void findtop(char class[13][100], int *count, char longname[100], char shortname[100]);

int main() {
    int count;
    char longname[100];
    char shortname[100];
    char class[13][100]; //학과명 읽어오는거
    //받아서 판독하는 함수
FILE *file = fopen("name.txt", "r");
for(int i=0; i<13; i++){
    fgets(class[i], 100, file);
}

findtop(class, &count, longname, shortname);
printf("Count : %d\n", count);
printf("Longest name : %s\n", longname);
printf("Shortest name : %s\n", shortname);

fclose(file);
  return 0;
}

void findtop(char class[13][100], int *count, char longname[100], char shortname[100]){
    int maxlength = 0, minlength = 100;
    *count = 0;
    for(int i=0; i<13; i++){
        int length = strlen(class[i]);
        (*count)++;
        if(length>maxlength){
            maxlength = length;
            strcpy(longname, class[i]);
        }
        if(length<minlength){
            minlength = length;
            strcpy(shortname, class[i]);
        }
    }
}
