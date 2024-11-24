#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_person{
 char name[20];
 char address[80];
 int age;
}; 

struct st_person* getPerson();
struct st_person *p[3];

int main() {

  for(int i=0; i<3; i++){
    p[i] = getPerson();
  }
  
  for(int i=0; i<3; i++){
      printf("%d. %s / %s / %d\n", i+1, p[i]->name, p[i]->address, p[i]->age);
  }

  return 0;
}

struct st_person* getPerson(){
    struct st_person* p = (struct st_person*)malloc(sizeof(struct st_person));
    
    fgets(p->name, 20, stdin);
    p->name[strcspn(p->name, "\n")] = '\0';
    fgets(p->address, 80, stdin);
    p->address[strcspn(p->address, "\n")] = '\0';
    scanf("%d", &p->age);
    getchar();
    
    //개행 문자를 제거해 줘야 한다.
    
    return p;
}
