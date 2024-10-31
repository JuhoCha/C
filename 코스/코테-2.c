#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Student ID  Name  Honor code

#define SIZE 50 //사이즈를 50으로 정함
char genre_name[10][20] = {"","Drama","Action","Romance","Sci-Fi","Horror","Comedy"};//장르는 총 10개 영화를 20자까지 저장할 수 있고

// Functions completed
void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index);//영화 목록을 저장하는 함수
void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);//영화를 저장하는 함수
void random_pick(int result[3], int size);//랜덤한 수 3개 만들어서 저장
void list_genre(int result[7]);//6장르별 영화개수 출력 

// Functions you need to implement
void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size);//strstr쓰고 아스키써서 문자 찾기 
void random_list(char title[][100], int genre[], int pickup[3]);//3개 배열 확인
void count_genre(int genre[], int size, int result[7]);//장르별 영화개수 저장
int find_max(int num_array[], int size);//큰수가 들어있는 요소와 인덱스 찾기

// You can't change the main() function.
int main(){
/*
Write down your understanding of the code for this function.
사이즈는 50으로 고정되어 있고, SIZE활용하면 될것 같음. 근데 영화 목록을 저장해야 하고, 그 영화목록에 영화들 저장하게 하고, 랜덤한 수 3개 만들어서 랜덤한 영화 즉 추전영화 나오게 하는거고 지금 1번은 되어있음. 2번에서 필요한 코드는 배열에서 일치하는 단어 찾는거고 3번에서 필요한 코드는 랜덤 수 프린트 하는거임 그래서 배열에서 랜덤 수 찍은거 세 개 나오게 하는거고 4번은 장르별로 몇개 있는지 확인하는거 
*/
	char title[SIZE][100];
	int year[SIZE], genre[SIZE], playtime[SIZE], viewers[SIZE];
	int size, menu;
	int pick[3], top, count[10];
	srand(1000);
	scanf("%d", &size);	
	for (int i=0; i<size; i++){
		getchar();
		fgets(title[i], 100, stdin);
		if(title[i][strlen(title[i])-1] == '\n') title[i][strlen(title[i])-1] = '\0';
		scanf("%d %d %d %d", &year[i], &genre[i], &playtime[i], &viewers[i]);
	}
	printf("%d records saved.\n", size);
	while(1){
		printf("\nMenu (1:List 2:Search 3:Random 4:Report 0:Exit) > ");
		scanf("%d", &menu);
		if(menu==0) break;
		if(menu == 1) list(title, year, genre, playtime, viewers, size);
		else if(menu == 2) search(title, year, genre, playtime, viewers, size);
		else if(menu == 3) {
			random_pick(pick, size);
			random_list(title, genre, pick);
		}
		else if(menu == 4){
			printf("1. Number of movies by genre\n");
			count_genre(genre, size, count);
			list_genre(count);
			
			top = find_max(playtime, size);
			printf("2. Longest Playtime\n>>>");
			list_record(title, year, genre, playtime, viewers, top);
			
			top = find_max(viewers, size);
			printf("3. Most viewers\n>>>");
			list_record(title, year, genre, playtime, viewers, top);
		}
	}
	return 0;
}

void list_record(char title[][100], int year[], int genre[], int playtime[], int viewers[], int index){
/*
Write down your understanding of the code for this function.

*/
	printf("%s [%d, %s] ", title[index], year[index], genre_name[genre[index]]);
	printf("Playtime %dmin, Viewers %d\n", playtime[index], viewers[index]);
}

void list(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size){
/*
Write down your understanding of the code for this function.

*/
	for(int i=0; i<size; i++){
		printf("%2d. ", i+1);
		list_record(title, year, genre, playtime, viewers, i);
	}
}

void random_pick(int result[3], int size){
/*
Write down your understanding of the code for this function.
랜덤한 영화 세 개가 프린트 되고, 제목&장르가 나와야함
*/
	int duplicated, count=0;
	while(count<3){
		int number = rand()%size;
		duplicated = 0;
		for(int i=0; i<count; i++){
			if(number == result[i]) duplicated = 1;
		}
		if(duplicated == 0){
			result[count] = number; count++;
		}
	}
}

void list_genre(int result[7]){
/*
Write down your understanding of the code for this function.

*/
	for(int i=1; i<=6; i++){
		printf("%s \t %d movies \n", genre_name[i], result[i]);
	}
}

////////////////////////////////////

void search(char title[][100], int year[], int genre[], int playtime[], int viewers[], int size){
	char keyword[50];
	int count=0;
	printf("Enter a keyword > ");
	scanf("%s", keyword);
	

	// Your thought and code here!	
	for(int i=0; i<size; i++){
	    if(strstr(title[i], keyword) != NULL){
	        printf("%2d. ", i + 1);
	        list_record(title, year, genre, playtime, viewers, i);
            count++;
	    }
	}
	printf("%d found.\n", count);
}

void random_list(char title[][100], int genre[], int pickup[3]){

	// Your thought and code here!
	printf("\n");
	for(int i=0; i<3; i++){
	    
	    printf("%2d. ", i + 1);
	    printf("%s [%s]\n", title[pickup[i]], genre_name[genre[pickup[i]]]);
	}

}

void count_genre(int genre[], int size, int result[7]){
	// Your thought and code here!	
	for(int i = 0; i < 7; i++) result[i] = 0;  // 초기화
    for(int i = 0; i < size; i++){
        result[genre[i]]++;
    }
}

int find_max(int num_array[], int size){
    int max = 0;
    int max_index = 0;
    for(int i = 1; i < size; i++){
        if(num_array[i] > max){
            max = num_array[i];
            max_index = i;
        }
    }

	// Your thought and code here!	

	
	return max_index;
}

