#include <stdio.h>
int  month_days(int y,  int  m, int ndays);

int  first_day(int  y, int  m);

void print_calendar(int  ndays, int  d1, int m);

int main( ){

  int y, m, ndays, d1;

      scanf("%d %d", &y, &m);

      ndays = month_days(y, m, 0);

      d1 = first_day(y, m);

      print_calendar(ndays, d1, m);

  }

int  month_days(int  y, int  m, int ndays){
  if((y%4==0)&&(y%100!=0)||(y%400==0)){
    switch(m){
      case 2: ndays = 29; break;
      case 4:
      case 6:
      case 9:
      case 11: ndays =30; break;
      default: ndays = 31; break;
    }
  }else{
    switch(m){
      case 2: ndays = 28; break;
      case 4:
      case 6:
      case 9:
      case 11: ndays =30; break;
      default: ndays = 31; break;
    }
  }

  return ndays;

}

int  first_day(int  y, int  m){
int ndays = 0;
  for(int i = 1900; i < y; i++){
    if((i%4==0)&&(i%100!=0)||(i%400==0)){
      ndays+=366;;
    }else{
      ndays+=365;
    }
    
  }
    for (int i = 1; i < m; i++) {
        ndays += month_days(y, i, 0);
    }

  return (ndays+1)%7;

}

void print_calendar(int  ndays, int  d1, int m){
printf("Sun Mon Tue Wed Thur Fri Sat\n");
    for(int i=0; i<d1; i++){
        printf("    ");
    }
  for(int i=1; i<=ndays; i++){
    printf(" %2d ", i);
    if((i + d1) % 7 == 0){
      printf("\n");
    }
  }

}
