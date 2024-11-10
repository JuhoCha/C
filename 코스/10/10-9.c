#include <stdio.h>

int main() {
  int countUp=0; //대문자 수 
  int countLow=0; //소문자 수
  int countSpace=0; //빈칸 수
  
  char sen[9][100];//문자열 받기 

  
  FILE *file = fopen("data.txt", "r");
  
  for(int i=0; i<9; i++){
      fgets(sen[i], 100, file);
      for(int j=0; sen[i][j] != '\0'; j++){ //null 나오면 줄바꿈인거 알 수 있게
          if(sen[i][j]>='a'&&sen[i][j]<='z'){
              countLow++;
          }
          if(sen[i][j]>='A'&&sen[i][j]<='Z'){
              countUp++;
          }
          if(sen[i][j]==' '){
              countSpace++;
          }
      }
  }
  
  printf("Uppercase letters: %d, Lowercase letters: %d, Spaces: %d", countUp, countLow, countSpace);

fclose(file);
  return 0;
}
