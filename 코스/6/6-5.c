#include <stdio.h>

int main() {

char birthday[8];
// int year;
// int month;
// int day;
int sum_y=0;
int sum_m=0;
int sum_d=0;
int i; 
int total;

// scanf("%d", &year);
// scanf("%d", &month);
// scanf("%d", &day);


//fgets(birthday, 9, stdin);
for(i=0; i<9; i++){
    scanf("%c", &birthday[i]);
}

for(i=0; i<4; i++){
    sum_y += birthday[i]-'0';
}
//for(i=4; i<6; i++){
    sum_m=(birthday[4]-'0')*10+birthday[5]-'0';
//}
//for(i=6; i<8; i++){
    sum_d=(birthday[6]-'0')*10+birthday[7]-'0';
//}

total= sum_y + sum_m + sum_d ; 

printf("%d\n", total);
//  printf("%d\n", sum_y);
//  printf("%d\n", sum_m);
//  printf("%d\n", sum_d);

  return 0;
}
