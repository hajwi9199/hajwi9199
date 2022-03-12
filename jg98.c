#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int scores[3][4];
    int i, j;
    int tot = 0;
    double avg;
    double average[4] = { 0 };
    srand(time(NULL));                
 
    // 자료생성
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scores[i][j] = rand() % 100;   // 난수생성하여 배열에 저장
 
    // 자료출력
    for (i = 0; i < 3; i++)
    {
        tot = 0;
        printf("     %d번째 학생: ", i + 1);
        for (j = 0; j < 4; j++)
        {
            printf("%9d", scores[i][j]);
            tot += scores[i][j];            // 개인 총점
            average[j] += scores[i][j];     // 과목 총점
        }
        avg = tot / 4.0;
        printf("   총점:%2d   평균:%.2f \n", tot, avg);
    }
    for (i = 0; i < 4; i++)
        average[i] /= 3.0;                       // 과목 평균
 
    puts("------------------------------------------------------------------------------");
    printf("과목별 평균점수: ");
    for (i = 0; i < 4; i++)
        printf("\t%.1f", average[i]);           // 과목평균출력
    printf("\n");
}
