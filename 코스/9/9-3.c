#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void evalClass(int j[5][3], int i, int* s, float* a);
void evalStudent(int j[5][3], int i, int* s, float* a, char* g);

int main(void) {
	int score[5][3]; 		// A 2D array storing the scores of 5 students in 3 subjects 
	char classname[3][20]={"Korean","English","Math"};
	int sum; 				// Total score
	float avg;  			// Average score 
	char grade; 			// Grade
	int i, j;  				// Variable for loop
	
	srand(time(0)); //랜덤 수
	for(i=0;i<5;i++)
		for(j=0;j<3;j++)
			score[i][j] = rand()%50+51;

	printf("Scores of 5 students are generated.\n"); //5명의 학생들 과목과 점수 
	for(i=0;i<5;i++){
		printf("Student %d ",i+1);
		for(j=0;j<3;j++){
			printf("%s %d", classname[j], score[i][j]);
			if(j<2) printf(", ");
			else printf("\n");
		}
	}
	
	printf("1) The total and average scores for each subject.\n");
	for(i=0;i<3;i++){
		evalClass(score, i, &sum, &avg);
		printf("%s - Total %d Average %.1f\n",classname[i],sum,avg);
	}

	printf("2) The total and average scores for each student, along with the grade based on their average\n");
	for(i=0;i<5;i++){
		evalStudent(score, i, &sum, &avg, &grade);
		printf("Student %d - Total %d Average %.1f (Grade %c)\n",i+1,sum,avg,grade);
	}

	return 0;
}

void evalClass(int j[5][3], int i, int* s, float* a){
    *s = 0;
    for(int k=0; k<5; k++){
        *s+=j[k][i];
    }
    *a=*s/3; 
}

void evalStudent(int j[5][3], int i, int* s, float* a, char* g){
    *s = 0;
    for(int k=0; k<3; k++){
        *s+=j[i][k];
    }
    *a=(float)*s/5;
    if(*a<60){
        *g='F';
    }else if(*a<70){
        *g='D';
    }else if(*a<80){
        *g='C';
    }else if(*a<90){
        *g='B';
    }else{
        *g='A';
    }
}
