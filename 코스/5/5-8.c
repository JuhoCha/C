#include <stdio.h>

int main() {
  int number[10] = {0};     // 사용자가 입력한 숫자 10개
  int count =0;          // 현재까지 입력된 숫자의 갯수(0~10)
  int i, j;              // 반복문을 위한 변수
  int temp;           // 입력받은 임시 변수
  int check;          // 검사결과 (1성공, 0실패)
  
  /*
  사용자에게 1부터 100사이의 숫자를 10개 입력받아 이를 순서대로 출력하라. 단, 사용자가 입력하는 동안 이미 입력한 숫자와 같은 숫자를 입력하면 "잘못 입력하였습니다. 다시 입력하세요."라는 문구와 함께 다시 입력받도록 하라. 입력이 완료되면 10개의 수를 모두 출력하라.
  
  일단 10번 반복하게 하고 temp써서 if문 으로 비교 후 같은 수 입력되면 다시 입력하라는 문구 나오게 만들고 count해서 현재까지 입련된 숫자 갯수 센다. 
  입력 문구는 
  Enter a number between 1 and 100.
  Enter the %dth number: %d
  이다. 
  또한 
  The %dth number is %d.
  */
  printf("Enter a number between 1 and 100.\n");

  while (count < 10) {//이건 계속 반복해서 실행 조건에 따라 지속되어야 하니까 while쓰는게 유리했음
    printf("Enter the %dth number: ", count + 1); //카운트 쓰는 이유도 이 수가 유효한 수일때 1카운트이기 때문
    scanf("%d", &temp);//임시로 이 수가 조건에 맞는지 보기위해 temp사용

    for (j = 0; j < count; j++) { //지금까지 유효한 만큼만 반복하고
      if (number[j] == temp) { //수가 입력되었을때 그 수가 임시 저장되어 있는 수와 같다면 카운트x하고 이 루프를 빠져나와서 밑으로
        printf("Invalid input. Please enter again.\n");
        break; 
      }
    }

    if (j == count) { //반복횟수가 다하면
      number[count] = temp; //임시저장되어 있던 수를 number[i]에 저장함 그리고 count를 올리며 횟수를 증가시킴
      count++;  
    }
  }

  for (i = 0; i < 10; i++) {
    printf("The %dth number is %d.\n", i + 1, number[i]);
  }
  return 0;
}
