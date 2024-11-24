#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fopen으로 파일 열어야 하고, 
int readtext(char* p[]);

int main(){
    char* pstr[20]; 				// 실제로 저장될 최대 20개의 문장을 위한 포인터 배열 
    char* longest;				// 가장 긴 문장을 가리키는 포인터
    char* shortest;				// 가장 짧은 문장을 가리키는 포인터
    
    int lines = readtext(pstr); // 함수로부터 문장읽기를 수행한 후, 문장 수 받아 옴
	printf("%d lines read.\n", lines); 
    
    int maxlength=0, minlength=100;
    int maxi, mini;
    
    for(int i=0; i<lines; i++){
        if(strlen(pstr[i])>maxlength){
            maxlength = strlen(pstr[i]);
            longest = pstr[i];
            maxi=i;
        }
        if(strlen(pstr[i])<minlength){
            minlength = strlen(pstr[i]);
            shortest = pstr[i];
            mini=i;
        }
    }
    
	
	printf("Longest #%d - %s\n", maxi+1, longest);
	printf("Shortest #%d - %s\n", mini+1, shortest);
    
    return 0;
}

int readtext(char* p[]){
	FILE* file;
	char temp[100]; // 임시 문자열
	int count=0; // 읽은 문장의 수
	file = fopen("data.txt", "r");
	while(!feof(file)){
		if(!fgets(temp, 100, file)) break;  // 읽은 내용이 없으면 중단
		if(temp[strlen(temp)-1]=='\n') //마지막에 마침표
		    temp[strlen(temp)-1]='\0';  // 마지막 개행문자 제거
		p[count] = (char*) malloc(sizeof(char)*strlen(temp)+1); // 메모리 할당
		strcpy(p[count], temp); // 문장내용 복사
		count++;  // 문장갯수 증가
	}
	fclose(file);
	return count;
}

