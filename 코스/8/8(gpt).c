#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int classSum(int s[5][3], int classnum);
int studentSum(int s[5][3], int studentnum);
char studentGrade(int s[5][3], int studentnum);

int main(void) {
    int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
    char classname[3][20] = {"Korean", "English", "Math"};
    srand(time(0));

    // 점수 생성 및 출력
    printf("The scores for 5 students have been generated.\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d - ", i + 1);
        for (int j = 0; j < 3; j++) {
            jumsu[i][j] = rand() % 51 + 50;
            printf("%s %d", classname[j], jumsu[i][j]);
            if (j < 2) printf(", ");
        }
        printf("\n");
    }

    // 과목별 총점과 평균
    printf("1) The total and average scores for each subject\n");
    for (int j = 0; j < 3; j++) {
        int total = classSum(jumsu, j);
        printf("%s - Total %d, Average %.1f\n", classname[j], total, total / 5.0);
    }

    // 학생별 총점, 평균 및 등급 출력
    printf("2) The total and average scores for each student, along with the grade based on their average\n");
    for (int i = 0; i < 5; i++) {
        int total = studentSum(jumsu, i);
        float average = total / 3.0;
        char grade = studentGrade(jumsu, i);
        printf("Student %d - Total %d, Average %.1f (Grade %c)\n", i + 1, total, average, grade);
    }

    return 0;
}

int classSum(int s[5][3], int classnum) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s[i][classnum];
    }
    return total;
}

int studentSum(int s[5][3], int studentnum) {
    int total = 0;
    for (int j = 0; j < 3; j++) {
        total += s[studentnum][j];
    }
    return total;
}

char studentGrade(int s[5][3], int studentnum) {
    int total = studentSum(s, studentnum);
    float average = total / 3.0;

    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}
