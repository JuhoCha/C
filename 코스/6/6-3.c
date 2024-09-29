#include <stdio.h>
#include <string.h>

int main() {
    char names[14][100]={
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
        "Creative Convergence Education",
        "Applied Artificial Intelligence"
    };
    
    //min max 해서 비교
    //names 길이 strlen에서 비교
    int i, j=0;
    int min=0;
    int max=0;
    
    for(i=0; i<14; i++){
        strlen(names[i]);
        if(strlen(names[i])>strlen(names[max])){
            max = i;
        }
        if(strlen(names[i])<strlen(names[min])){
            min = i;
        }
    }
    printf("The longest school name is %s.\n", names[max]);
    printf("The shortest school name is %s.", names[min]);
    
    return 0;
}
