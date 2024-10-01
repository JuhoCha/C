#include<stdio.h>
#include <string.h>

int main(){
    /*
age < 20: [Youth]
21 <= age < 40: [Junior]
40 <= age < 65: [Senior]
65 <= age: [Silver]
    */
    char firstname[30];
    char lastname[30];
    char age_group[4][30] = {"[Youth]","[Junior]","[Senior]","[Silver]"}; 
    int birthyear;
    int year;
    int age;
    char result[100];
    char name[100];
    
    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%d", &year);
    
    strcpy(name, firstname); //name에 복사하고
    strcat(name, " ");
    strcat(name, lastname); //name은 firstname 이니까 둘이 연달아서 나오게 하고 
    
    age = 2024 - year;
    if(age<20){
       //printf("%s ", age_group[0]);
       strcpy(result, age_group[0]);
       strcat(result, " ");
    }
    else if(age<40){
       //printf("%s ", age_group[1]);
        strcpy(result, age_group[1]);
        strcat(result, " ");
    }
    else if(age<60){
       //printf("%s ", age_group[2]);
       strcpy(result, age_group[2]);
       strcat(result, " ");
    }
    else{
        //printf("%s ", age_group[3]);
        strcpy(result, age_group[3]);
        strcat(result, " ");
    }
    
    // printf("%s ", firstname);
    // printf("%s", lastname);
    
    
    strcat(result, name); //name은 first랑 last 둘 다 있으니 result 해서 year 나오게
    
    printf("%s", result);
    
    
    return 0;
}
