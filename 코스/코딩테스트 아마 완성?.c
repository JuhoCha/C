#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student ID  Name  Honor code
// 22400719 차주호 나 차주호는 하나님과 사람 앞에서 정직하고 성실하게 코딩테스트를 수행하겠습니다.
// Your thoughts here!
#define SIZE 50
#define GENRES 8

const char* genre_name[] = {
  "Sci-Fi",
  "Thriller",
  "Action",
  "Romance",
  "Musical",
  "Drama",
  "Animation",
  "War"
}; //constant value

typedef struct st_movie{
  char title[100];
  int year, genre, playtime, viewers;
  char description[255];
} MOVIE;//Movie라는 구조체로 정의됨됨

// menu functions
int load_movies(MOVIE* list[], char filename[]);
void print_record(MOVIE* list[], int index);
void print_all(MOVIE* list[], int size);
void search(MOVIE* list[], int size);
int add_movie(MOVIE* list[], int size);
void edit_movie(MOVIE* list[], int size);
int remove_movie(MOVIE* list[], int size);
void print_random(MOVIE* list[], int size);
void print_report(MOVIE* list[], int size);
void save_movies(MOVIE* list[], int size);
int cut(MOVIE* list[], int size);

// utility functions
int index_genre(char* name);
int ask_menu();
void random_pick(int count, int result[], int size);
void count_genre(MOVIE* list[], int size, int result[]);
void print_count_genre(int result[]);
int find_max_viewers(MOVIE* list[], int size);
int find_max_playtime(MOVIE* list[], int size);
int find_next_max_viewers(MOVIE* list[], int size, int max);
int find_next_max_playtime(MOVIE* list[], int size, int max);

int main() {
  MOVIE* mlist[SIZE];
  int size, menu, stop=0;
  srand(1000); 
  size = load_movies(mlist, "movies.txt");	
  while(!stop){
    menu = ask_menu();
    switch(menu){
      case 0 : stop = 1;
        break;
      case 1 : print_all(mlist, size);
        break;
      case 2 : search(mlist, size);
        break;
      case 3 : size = add_movie(mlist, size);
        break;
      case 4 : edit_movie(mlist, size);
        break;
      case 5 : size = remove_movie(mlist, size);
        break;
      case 6 : print_random(mlist, size);
        break;
      case 7 : print_report(mlist, size);
        break;
      case 8 : save_movies(mlist, size);
        break;
      case 9 : cut(mlist, size);
        break;
    }
  }
  return 0;
}

int load_movies(MOVIE* list[], char filename[]){
  int count=0;
  FILE* fp = fopen(filename, "r");
  char title[100], desc[255], genre[50];
  int year, playtime, viewers;
  while(!feof(fp)){//파일의 끝까지 정리하라고 되었다
    if(!fgets(title, 100, fp)) break;
    if(title[strlen(title)-1] == '\n') title[strlen(title)-1] = '\0';
    fgets(desc, 255, fp);
    if(desc[strlen(desc)-1] == '\n') desc[strlen(desc)-1] = '\0';
    fscanf(fp, "%d %s %d %d", &year, genre, &playtime, &viewers);
    fgetc(fp);
    //printf("[%d] %s / %s\n", count, title, desc);
    list[count] = (MOVIE*) malloc(sizeof(MOVIE));
    strcpy(list[count]->title, title);
    strcpy(list[count]->description, desc);
    list[count]->year = year;
    list[count]->genre = index_genre(genre);
    list[count]->playtime = playtime;
    list[count]->viewers = viewers;
    count++;
  }
  printf("%d records loaded.\n", count);
  fclose(fp);
  return count;
}

void print_record(MOVIE* list[], int index){
  printf("%s [%d, %s, ", list[index]->title, list[index]->year, genre_name[list[index]->genre]);
  printf("%dmin, Viewers %d]\n", list[index]->playtime, list[index]->viewers);
  printf(">>> %s\n", list[index]->description);
}

void print_all(MOVIE* list[], int size){
  for(int i=0; i<size; i++){
    printf("%2d. %s [%d, %s]\n", i+1, list[i]->title, list[i]->year, genre_name[list[i]->genre]);
  }
}

void search(MOVIE* list[], int size){
  char keyword[50];
  int count=0;
  printf("Enter a keyword > ");
  scanf("%s", keyword);
  printf("\n[Search in the movie title]\n\n");
  for(int i=0; i<size; i++){
    if(strstr(list[i]->title, keyword)){//검색
      print_record(list, i);
      printf("\n");
      count++;
    }
  }
  printf(">%d found.\n", count);
  count = 0;
  printf("\n[Search in the movie description]\n\n");
  for(int i=0; i<size; i++){
    if(strstr(list[i]->description, keyword)){
      print_record(list, i);
      printf("\n");
      count++;
    }
  }
  printf(">%d found.\n", count);

}

int add_movie(MOVIE* list[], int size){
  // Your Code Here!
  // 키보드로 입력받아서 size+1해주면 될듯
  //-> 포인터로 값 추가
 
  int year, playtime, viewers, genre;
  char title[100], desc[255];
  
  printf("제목을 입력하세요.\n");
  getchar();
  fgets(title,sizeof(title), stdin);
  title[strlen(title)-1]='\0';
  
  printf("설명을 입력하세요.\n");
  fgets(desc,sizeof(desc), stdin);
  desc[strlen(desc)-1]='\0';
  
  printf("년도를 입력하세요.\n");
  scanf("%d", &year);
  
  printf("장르를 입력하세요.\n");
  scanf("%d", &genre);
  
  printf("상형시간을 입력하세요.\n");
  scanf("%d", &playtime);
  
  printf("관객수를 입력하세요.\n");
  scanf("%d", &viewers);
  
  list[size] = (MOVIE*)malloc(sizeof(MOVIE));
  strcpy(list[size]->title, title);
  strcpy(list[size]->description, desc);
  list[size]->year = year;
  list[size]->playtime = playtime;
  list[size]->viewers = viewers;
  list[size]->genre = genre;
  
  return size+1;
  
}


void edit_movie(MOVIE* list[], int size){
  int no;
  printf("Enter a number of list > ");
  scanf("%d", &no);
  if(no > size) {
    printf("Wrong number!\n");
    return;
  }


// Your Code Here!
// index와 일치하면 불러와서 수정하도록 바꾸기 
//-> 포인터로 값 수정
// 포인터 조심
 
 int year, playtime, viewers, genre;
  char title[100], desc[255];
  
  print_record(list, no-1);
  
  printf("새 제목을 입력하세요.\n");
  getchar();
  fgets(title,sizeof(title), stdin);
  title[strlen(title)-1]='\0';
  
  printf("새 설명을 입력하세요.\n");
  fgets(desc,sizeof(desc), stdin);
  desc[strlen(desc)-1]='\0';
  
  printf("새 년도를 입력하세요.\n");
  scanf("%d", &year);
  
  printf("새 장르를 입력하세요.\n");
  scanf("%d", &genre);
  
  printf("새 상형시간을 입력하세요.\n");
  scanf("%d", &playtime);
  
  printf("새 관객수를 입력하세요.\n");
  scanf("%d", &viewers);
  
  list[no-1] = (MOVIE*)malloc(sizeof(MOVIE));
  strcpy(list[no-1]->title, title);
  strcpy(list[no-1]->description, desc);
  list[no-1]->year = year;
  list[no-1]->playtime = playtime;
  list[no-1]->viewers = viewers;
  list[no-1]->genre = genre;

}


int remove_movie(MOVIE* list[], int size){
  int no;
  printf("Enter a number of list > ");
  scanf("%d", &no);
  if(no > size) {
    printf("Wrong number!\n");
    return;
  }

// Your Code Here!
// 입력받은 넘버 삭제 그리고  
// 해당하는 인덱스 지우기 --;

int choice;

print_record(list, no-1);
printf("삭제하시겠습니까?: (0:NO, 1:YES)>");
scanf("%d", &choice);
if(choice==1){
    // 삭제할 영화 메모리 해제
        free(list[no-1]);
        
        // 뒤에 있는 영화들 앞으로 한 칸씩 이동
        for (int i = no-1; i < size-1; i++) {
            list[i] = list[i+1];
        }
    size--;

    printf("영화가 삭제 되었습니다.\n");
}else{
    printf("영화가 삭제 되지 않았습니다.\n");
}

return size;
}

void print_random(MOVIE* list[], int size){
  int count, pick[10];
  printf("Enter numbers of movies you want (max 10) > ");
  scanf("%d", &count);



// Your Code Here!
//srand(1000)이 있었는데 그걸 이용해서 rand()%count 입력받은 만큼 random돌리면 될것 같다

random_pick(count, pick, size);
printf("랜덤하게 선택된 영화들 입니다\n");
    for(int i=0; i<count; i++){
        print_record(list, pick[i]);
        printf("\n");
    }


}


void print_report(MOVIE* list[], int size){
  int top, count[GENRES];
  printf("\n1. Number of movies by genre\n");
  count_genre(list, size, count);
  print_count_genre(count);


// Your Code Here!
// 장르가 몇개가 얼마나 있는지 알려주는 거니까 장르별 인덱스 카운트 해주면 된다. 장르[카운트[]];
   printf("\n2. Top 3 관람객 많은 영화\n");
    top = find_max_viewers(list, size);
    for (int i = 0; i < 3 && top != -1; i++) {
        print_record(list, top);
        printf("\n");
        top = find_next_max_viewers(list, size, list[top]->viewers);
    }

    printf("\n3. Top 3 상영시간 긴 영화\n");
    top = find_max_playtime(list, size);
    for (int i = 0; i < 3 && top != -1; i++) {
        print_record(list, top);
        printf("\n");
        top = find_next_max_playtime(list, size, list[top]->playtime);
    }
}

int cut(MOVIE* list[], int size){
    int min=0;
    for(int i=0; i<size; i++){
        if(list[i]->viewers < list[min]->viewers){
            min = i;
        }
    }
    print_record(list, min);
    int choice;
    printf("삭제하시겠습니까?: (0:NO, 1:YES)>");
    scanf("%d", &choice);
    if(choice==1){
        list[min]=list[size-1];
        size--;
        printf("영화가 삭제 되었습니다.\n");
    }else{
        printf("영화가 삭제 되지 않았습니다.\n");
    }

return size;
}

void save_movies(MOVIE* list[], int size){
  FILE* fp = fopen("movies.txt", "w");


// Your Code Here!
// fprintf써서 파일 안에 저장해주어야 한다. 
for(int i=0; i<size; i++){
    fprintf(fp, "%s\n%s\n%d %s %d %d\n", list[i]->title, list[i]->description, list[i]->year, genre_name[list[i]->genre], list[i]->playtime, list[i]->viewers);
}

  fclose(fp);
}

// Utility Functions

int index_genre(char* name){
  for(int i=0; i<GENRES; i++)
    if(strcmp(genre_name[i], name)==0) return i;
  return -1;
}

int ask_menu(){
  int menu;
  printf("\nMenu (1:List 2:Search 3:Add 4:Edit 5:Remove 6:Random 7:Report 8.Save 9.Least cut 0:Exit) > ");
  scanf("%d", &menu);
  return menu;
}

void random_pick(int count, int result[], int size){
  int duplicated, picked=0;
  while(picked < count){
    int number = rand()%size;
    duplicated = 0;
    for(int i=0; i<picked; i++){
      if(number == result[i]) duplicated = 1;
    }
    if(duplicated == 0){
      result[picked] = number; picked++;
    } 
  }
}

void count_genre(MOVIE* list[], int size, int result[]){
  for(int i=0; i<GENRES; i++){
    result[i] = 0;
  }

  // Your Code Here!
  // 장르 카운트 인덱스 안에 인덱스를 사용하면 될것 같다. 
 for(int i=0; i<size; i++){
     int genre = list[i]->genre;
     result[genre]++;
 }

}

void print_count_genre(int result[]){
  for(int i=0; i<GENRES; i++){
    printf("[%d] %-10s %d movies\n", i+1, genre_name[i], result[i]);
  }
}

int find_max_viewers(MOVIE* list[], int size){
  int max_index=0;
  for(int i=1; i<size; i++)
    if(list[max_index]->viewers < list[i]->viewers) 
      max_index = i;
  return max_index;
}

int find_max_playtime(MOVIE* list[], int size){
  int max_index=0;
  for(int i=1; i<size; i++)
    if(list[max_index]->playtime < list[i]->playtime) 
      max_index = i;
  return max_index;
}

int find_next_max_viewers(MOVIE* list[], int size, int max){
  int max_index=0;
  for(int i=1; i<size; i++)
    if(list[max_index]->viewers < list[i]->viewers && max > list[i]->viewers) 
      max_index = i;
  return max_index;
}

int find_next_max_playtime(MOVIE* list[], int size, int max){
  int max_index=0;
  for(int i=1; i<size; i++)
    if(list[max_index]->playtime < list[i]->playtime && max > list[i]->playtime) 
      max_index = i;
  return max_index;
}
