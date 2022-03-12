#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Information{
char name[10];
char p_num[15];
int w_time;
int t_wage;
}Information;

Information staff[10];
static int wage = 5580;
int i, j, k;
int s_count=0;
int max_time=-1;
char max_name[10];
int max_wage;
int total_wage=0;

void Input(){
printf("---------------------------------------\n");
printf("|* 데이터를 입력하세요.                                                         |\n");
printf("|* 최대 10개의 데이터를 입력할수 있습니다.                        |\n");
printf("|* 이름에 공백(Space) 사용 불가능.                                             |\n");
printf("|* 이름에 x를 입력하면 입력을 종료 합니다.                       |\n");
printf("|-------------------------------------|\n");
printf("|* 시간당 최저 임금 : 5580 원                             |\n");
printf("---------------------------------------\n");

for(i=0; i<4; i++){
printf("%d번째 근무자\n", i+1);
printf("이    름:");
scanf(" %[^\n]s", &staff[i].name);
if(strcmp(staff[i].name, "x")==0){
break;
}

printf(" 전화번호:");
scanf(" %s", &staff[i].p_num);
printf(" 근무시간:");
scanf("%d", &staff[i].w_time);
staff[i].t_wage = staff[i].w_time * wage;

s_count++;
}
}

void Max_Time(){
for(i=0; i<s_count; i++){
if(max_time < staff[i].w_time){
max_time = staff[i].w_time;
strcpy(max_name, staff[i].name);
max_wage = staff[i].t_wage;
}
}
}

void Total_wage(){
for(i=0; i<s_count; i++){
total_wage += staff[i].t_wage;
}
}

void Output(){

printf("--------------------------------------------------------------\n");
printf("| 이      름 |  휴대폰번호  |  근무시간  |  총  급  여  |\n");
printf("--------------------------------------------------------------\n");

for(i=0; i<s_count; i++){
printf("|%14s | %14s | %6d 시간 | %11d 원 | \n", staff[i].name, staff[i].p_num, staff[i].w_time, staff[i].t_wage);
}
printf("---------------------------------------------------\n");
printf("* 총 직원 수 : %d명\n", s_count);
Max_Time();
printf("* 가장 많이 근무한 직원은 %d시간동안 일한 %s이며, 급여는 %d원입니다. \n", max_time, max_name, max_wage);
Total_wage();
printf("* 그리고 지불해야할 총 급여는 %d원입니다.", total_wage);
}


int main()
{
Input();
Output();

return 0;
}