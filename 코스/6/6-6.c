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
    
    scanf("%s", firstname);
    scanf("%s", lastname);
    scanf("%d", &year);
    
    
    
    
    age = 2024 - year;
    if(age<20){
       printf("%s ", age_group[0]);
    }
    else if(age<40){
       printf("%s ", age_group[1]);
    }
    else if(age<60){
       printf("%s ", age_group[2]);
    }
    else{
        printf("%s ", age_group[3]);
    }
    printf("%s ", firstname);
    printf("%s", lastname);
    
    
    
    return 0;
}
