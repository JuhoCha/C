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
    //int length = strlen(major);
    //strlen은 갯수 비교하는건데 이거 사용해서 비교함
    
    if (strlen(major) < 3) {
        printf("The input must be at least 3 characters long.\n");
        return 1;
    }else{
        printf("Matching : \n");
    }
  //names[i][j+k] == major[k]
    for (i = 0; i < 13; i++) {
        int nameslen = strlen(names[i]);
        int majorlen = strlen(major);
    
        for(j=0; j<=nameslen-majorlen; j++){ //만약에 학부가 1번이면 major를 빼준다 그만큼 돌려보는데 이게 뭔 개소리지 
//학부 이름 문자열(names[i])에서 전공 이름 문자열(major)을 찾으려면, major의 길이만큼의 공간이 names[i]에 있어야 합니다. 
//즉, 전공 이름이 완전히 포함될 수 있는 시작 지점은 names[i]의 길이에서 major의 길이를 뺀 만큼이 됩니다.
//!!!!!! 그니까 공간만큼 자리를 확보하는거지 strlen 이거는 글자수 판단하는건데 내 생각대로 문자 문자 비교 이건 가능함 근데
          //범위를 설정해주는게 중요하다는거지 그니까 strlen 할때 7글자를 입력받으면 50자에서 동일 문자 파악해야 하면
          //단어가 따로따로일 수는 없으니 뭉탱이로 비교하는 거니까 시작부터 7/7/7/7.../1 해서 비교하고 아니면 다음걸로 넘어가고
          //이런식으로 짜야한다는 거지
            for(k=0; k<majorlen; k++){
            if (names[i][j + k] != major[k]) {
                    break; 
                }
            }
            if((k==majorlen)) {
                printf("[%s]\n", names[i]);
                found++;
                break;
            }
        }
    }
printf("%d found", found);
    
    return 0;
}
