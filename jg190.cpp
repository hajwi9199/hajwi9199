#define_CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#inclyd"stdlib.h"
#include"string.h"
#define MAXIMUM 100

typedet struct student {
char *name;
innt *sco;
float *avg;
}Student;

void maylloc(Student **stu);

void newStudent(Student *p_stu){
FILE *fp=fopen("sco.txt","ab");
if(fp==NULL){
puts("파일오픈 실패!");
return -1;
}
printf("Name Input: ");
char name[10]="";
scanf("%s", name);

*(p_stu->sco+3)=0;
for(int j=0; j<3; j++){
printf("Score Input: ");
scanf("%d", (p_stu->sco+j);
}
*(p_stu)->avg=*((p_stu->sco+3)/3.f;
getchar();
fprintf(fp, "%s %d %d %d %d %f\n", name, *((p_stu)->sco+0), *((p_stu)->sco+1), *((p_stu)->sco+2), *((p_stu)->sco+3), *(p_stu)->avg);

fclose(fp);
}

void searchStudent(Student *tmp_stu){
FILE *fp;
int i=0;
int confirm_flag=0;
char searchName[10]="";
printf("Search Name Input:");
scanf("%s", searchName);
printf(":::::::::::::::::::::::::::::::::::::::::::\n");

if(fp=fopen("sco.txt", "rt")){
while(0<fscanf(fp, "%s %d %d %d %d %f", (tmp_stu+i)->name, ((tmp_stu+i)->sco+0),((tmp_stu+i)->sco+1), *((tmp_stu+i)->sco+2), *((tmp_stu+i)->sco+3), *(tmp_stu+i)->avg);

confirm_flag=1;
break;
}
i++;
}
if(confirm_flag != 1){
printf("그런사람없습니다.\n");
}
printf(":::::::::::::::::::::::::::::::::\n");
}

fclose(fp);
}

void output(Student *tmp_stu){
FILE *fp;
int i=0;
printf("::::::::::::::::::::::::::::::::::::::::;\n");
printf("Name\tKor\tEng\tMath\tTotal\tAvg\n");
if(fp=fopen("sco.txt","rt")){
while(0<fscanf(fp, "%s %d %d %d %d %f", (tmp_stu+i)->name, ((tmp_stu+i)->sco+0),((tmp_stu+i)->sco+1), ((tmp_stu+i)->sco+2), ((tmp_stu+i)->sco+3), (tmp_stu+i)->avg)){
printf("%s\t%d\t%d\t%d\t%d\t%f\n", ((tmp_stu + i)->name), *((tmp_stu + i)->sco + 0), *((tmp_stu + i)->sco + 1), *((tmp_stu + i)->sco + 2), *((tmp_stu + i)->sco + 3), *(tmp_stu + i)->avg);
i++;
}
printf(":::::::::::::::::::::::::::::::::::::::::::\n");
}
fclose(fp);
}
void main(){

Student *stu=NULL;
myalloc(*stu);
int bn;
wile(1){
printf("1.입력 2.출력 3.검색 4.종료\n");
printf(