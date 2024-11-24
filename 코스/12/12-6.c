#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int readtext(char* p[]);
int countVowels(char* str);//문자열 내에 들어있는 모음의 개수(aeiou,AEIOU)

int main()
{
	char* pstr[20]; // 실제로 저장될 최대 20개의 문장을 위한 포인터 배열 
	int lines = readtext(pstr); // 함수로부터 문장읽기를 수행한 후, 문장 수 받아 옴
	int totalVowels = 0;
	
	printf("%d lines read.\n", lines);
	
	for(int i=0;i<lines;i++){  // 모든 문장 출력
	    int vowels = countVowels(pstr[i]); 
		totalVowels += vowels;
        printf("#%d - %s [%d]\n", i + 1, pstr[i], vowels); 
	}
	
	
	return 0;
}

int readtext(char* p[]){
	FILE* file;
	char temp[100]; // 임시 문자열
	int count=0; // 읽은 문장의 수
	file = fopen("data.txt", "r");
	while(!feof(file)){
		if(!fgets(temp, 100, file)) break;  // 읽은 내용이 없으면 중단
		if(temp[strlen(temp)-1]=='\n')
		    temp[strlen(temp)-1]='\0';  // 마지막 개행문자 제거
		p[count] = (char*) malloc(sizeof(char)*strlen(temp)+1); // 메모리 할당
		strcpy(p[count], temp); // 문장내용 복사
		count++;  // 문장갯수 증가
	}
	fclose(file);
	return count;
}

int countVowels(char* str){
    char vowels[]="aeiouAEIOU";
    int count=0;
    
    for (int i = 0; str[i] != '\0'; i++){
        if(strchr(vowels, str[i])){
            count++;
        }
    }
    
    return count;
}
