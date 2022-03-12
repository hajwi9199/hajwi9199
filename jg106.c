#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

struct record {
char fname[15+1];
char lname[20+1];
char phone[11+1];
long income;
int month;
int day;
int year;
};

struct record list[MAX];
int last_entry=0;
void main(void);
void get_data(void);
void display_report(void);
int continue_func(void);
void clear(void);

void main(){
int cont = TRUE;
int ch;
while(cont == TRUE)
{
printf("\n\nMENU\n");
printf("========\n");
printf("\n1.이름입력");
printf("\n2.보고서 출력");
printf("\n3.종료");
printf("\n\n선택하세요 ==>");
ch = getchar();
fflush(stdin);

switch(ch)
{
case'1':get_data();
break;
case'2':display_report();
break;
case'3':print("\n\n이 프로그램을 이용해주셔서 감사합니다.\n");
cont = FALSE;
break;
default: printf("유효하지 않은 항목입니다. 1~3항목 중에서만 선택해주세요!");
break;
}
}
}

void get_data(void){
int cont;
for (cont = TRUE; last_entry<MAX&&cont==TRUE; last_entry++)
{
printf("%d번째 사용자에 대한 정보를 입력하는 항목입니다.",last_entry+1);

printf("\n\n성을 입력해주세요 : ");
gets(list[last_entry].fname);

printf("\n\n이름을 입력해주세요 : ");
gets(list[last_entry].lname);

printf("전화번호를 -를 포함하여 입력해주세요 : ");
gets(list[last_entry].phone);

printf("\n연봉을 입력해주세요 : ");
gets("%ld",&list[last_entry].income);
printf("\n생일을 입력해주세요");

do{
printf("생일의 월: ");
scanf("%d", &list[last_entry].month);
}
while(list[last_entry].month < 0 || list[last_entry].month > 12);

do{
printf("생일의 일: ");
scanf("%d", &list[last_entry].day);
}
while(list[last_entry].day < 0 || list[last_entry].day > 31);

do{
printf("생일의 년도: ");
scanf("%d", &list[last_entry].year);
}
while(list[last_entry].year < 0 || list[last_entry].year > 1997);

cont = continue_func();
if(last_entry == MAX)
printf("\n\n이미 전부 입력하셨습니다!\n");
}
}

void display_report(){
long month_total=0, grand_total=0;
int x, y;

fprintf(stdout, "\n\n");
fprintf(stdout, "\nreport");
fprintf(stdout, "\n========");

for(x=0; x<=12; x++)
{
month_total=0;
for(y=0; y<last_entry; y++)
{
if(list[y].month==x)
{
fprintf(stdout, "\n\t%s %s %s %ld", list[y].fname, list[y].lname, list[y].phone, list[y].income);
}
}
fprintf(stdout, "\n%d월 총 수입은 : %ld", x, month_total);
grand_total += month_total;
}
fprintf(stdout, "\n\n보고서 총 합 :");
fprintf(stdout, "\nc총 수입 : %ld", grand_total);
fprintf(stdout, "\n평균 수입 : %ld", grand_total/last_entry);

fprintf(stdout, "\n\n -- 보고서 끝 -- ");
}
int continue_func(void){
int ch;
printf("계속하시겠습니까? (Y/N) : ");
fflush(stdin);
ch = getchar();
while(ch!='n' && ch!='N' && ch!='y' && ch!='Y' )
{
printf("유효하지 않은 선택입니다!");
printf("끝내시려면 N, 계속하시려면 Y를 입력해주세요 :");
fflush(stdin);
ch = getchar();
}
clear();
if(ch == 'n' || ch == 'N')
return(FALSE);
else
return(TRUE);
}

void clear(void){
char junk[80];
gets(junk);
}