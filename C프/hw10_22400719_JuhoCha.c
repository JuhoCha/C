#include <stdio.h>
#include <string.h>

#define SIZE 10
#define INSERT 1
#define DELETE 2
#define STATUS 3
#define SEARCH 4
#define QUIT 5

struct element{
    char name[20];
    char sid[10];
    double score;
};

void show_menu(); //화면상에 메뉴 출력 
int get_command(); //메뉴에서 명련 선택한 값 return 
void insert_element(struct element list[], int *n); //menu 에서 명령 선택값 
void delete_element(struct element list[], int *n);
void show_status(struct element list[], int n);//array의 현재 상태 출력
void search_score(struct element list[], int n);//원소 조회하는 작업 

int main() {
    //정수 원소 array의 data 관리 program
    struct element thelist[SIZE];
    int n = 0;
    int cmd;
    
    do{
        cmd = get_command();
        switch(cmd){
            case INSERT: insert_element(thelist, &n);
            break;
            case DELETE: delete_element(thelist, &n);
            break;
            case STATUS: show_status(thelist, n);
            break;
            case SEARCH: search_score(thelist, n);
            break;
            case QUIT: printf(" Bye.\n");
            break;
            default: printf("\n\n Invalid command, try agin, please.\n\n");
            break;
        }
    }while(cmd != QUIT);//QUIT가 아닌 한 계속 반복
    
    return 0;
}

int get_command(){
    int tcmd;
    
    show_menu();
    scanf("%d", &tcmd);
    return tcmd;
}

void show_menu(){
    printf("\n\n -- MENU --\n");
    printf(" 1. Insert an element\n");
    printf(" 2. Delete the last element\n");
    printf(" 3. Show the current status\n");
    printf(" 4. Search the score by student number\n");
    printf(" 5. Quit\n");
    printf("\n      Select a Command:");
}

void insert_element(struct element list[], int* n){
    
    if(*n >= SIZE){//array 원소보다 크면
        printf("The array is full : No more elements can be added.\n\n");
        return;
    }
    
    printf(" Enter the student name : ");
    scanf("%s", list[*n].name);
    printf(" Enter the student number : ");
    scanf("%s", list[*n].sid);
    printf(" Enter the score : ");
    scanf("%lf", &list[*n].score);
    (*n)++;
    printf("\n An element has been inserted.\n");
}

void delete_element(struct element list[], int* n){
    if(*n == 0){
        printf("The array is empty : There are no elements to delete\n\n");
        return;
    }
    printf("The last element has been deleted.\n");
    (*n)--;
}

void show_status(struct element list[], int n){
    double max, min, sum;
    double average;
    
    if(n==0){
        printf("There are no elements in the array.\n\n");
        return;
    }
    sum=list[0].score;
    max=list[0].score;
    min=list[0].score;
    for(int k=1; k<n; k++){
        if(list[k].score > max){
            max = list[k].score;
        }
        if(list[k].score<min){
            min = list[k].score;
        }
        sum += list[k].score;
    }
    average = sum/n;
    printf("\n\n The current status: \n\n");
    printf("    - The number of elements : %d\n", n);
    printf("    - The maximum of elements : %.2f\n", max);
    printf("    - The minimum of elements : %.2f\n", min);
    printf("    - The average : %6.2f\n", average);
}

void search_score(struct element list[], int n){
    char find_id[10];
    printf(" Enter the student number you want to search for :");
    scanf("%s", find_id);
    for(int i=0; i<n; i++){
        if(strcmp(list[i].sid, find_id)==0){
            printf("The student %s's score : %.2f", list[i].sid, list[i].score);
            break;
        }
    }
}
