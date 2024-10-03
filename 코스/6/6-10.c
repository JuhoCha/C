#include <stdio.h>
#include <string.h>

int main(){
    //alphabet 소문자만 카운트
    //변수 두 개 받으면 각각 계산해서 동일한지 
    
    //알파벳 두 개 입력받기
    //알파벳 두 개 글자 수 저장하기 
    //저장한 두 알파벳의 글자 수가 동일한지 판단하기
    
int alphacount1[26]={0}, alphacount2[26]={0};
char alpha1[100];
char alpha2[100];
int i;

    //알파벳 두 개 입력받기
    fgets(alpha1, sizeof(alpha1), stdin);
    fgets(alpha2, sizeof(alpha2), stdin);
    
    
    //알파벳 두 개 글자 수 저장하기
    for(i=0; alpha1[i] != '\0'; i++){
        if(alpha1[i] >= 'a' && alpha1[i] <= 'z'){
            alphacount1[alpha1[i]-'a']++;
        }
    }
    for(i=0; alpha2[i] != '\0'; i++){
        if(alpha2[i] >= 'a' && alpha2[i] <= 'z'){
            alphacount2[alpha2[i]-'a']++;
        }
    }
    
    //저장한 두 알파벳의 각 알파벳 글자 수가 동일한지 판단하기
    for(i=0; i<26; i++){
        if(alphacount1[i]!=alphacount2[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    
    return 0;
}
