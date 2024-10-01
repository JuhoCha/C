#include <stdio.h>
#include <string.h>

int main() {
    // 학부명 리스트
    char names[13][100]={
        "Global Leadership School",
        "International Studies, Languages and Literature",
        "Management and Economics",
        "Law",
        "Counseling Psychology and Social Welfare",
        "Communication Arts",
        "Spatial Environment System Engineering",
        "Mechanical and Control Engineering",
        "Contents Convergence Design",
        "Life Science",
        "Computer Science and Electrical Engineering",
        "Global Entrepreneurship and ICT",
        "Creative Convergence Education"
    };
  
    char major[100];
    int i, j, k;
    int found = 0;
    
    
    scanf("%s", major);
    int length = strlen(major);
    
    if (strlen(major) < 3) {
        printf("The input must be at least 3 characters long.\n");
        return 1;
    }else{
        printf("Matching : \n");
    }
  
    for (i = 0; i < 13; i++) {
        if(strncmp(names[i], major, length) == 0) {
            printf("[%s]\n", names[i]);
            found++;
        }
    }
printf("%d found", found);
    
    return 0;
}
