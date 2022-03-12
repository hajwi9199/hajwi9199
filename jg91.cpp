#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
 
#define MAX_NAME_LEN	20
 
enum Subject
{
KOREAN, ENGLISH, MATH, MAX_SUBJECT
};
const char *stitle[MAX_SUBJECT] = { "국어","영어","수학" };
 
typedef struct _Student Student;
struct _Student
{
int num;
char name[MAX_NAME_LEN];
int scores[MAX_SUBJECT];
};
 
#define DEF_FNAME	"data.stu"
 
#define MAX_STUDENT	50
Student stues[MAX_STUDENT];
 
void Init();
void Run();
void Exit();
int main()
{
Init();
Run();
Exit();
return 0;
}
void Init()
{
FILE *fp = fopen(DEF_FNAME, "r");
if (fp)
{
fread(stues, sizeof(Student), MAX_STUDENT, fp);
fclose(fp);
}
}
 
int SelectMenu();
void AddStudent();
void AddScore();
void RemoveStudent();
void FindStudent();
void ViewAll();
void Run()
{
int key = 0;
while ((key = SelectMenu()) != 0)
{
switch (key)
{
case 1: AddStudent(); break;
case 2: AddScore(); break;
case 3: RemoveStudent(); break;
case 4: FindStudent(); break;
case 5: ViewAll(); break;
default: printf("잘못 선택하였습니다.\n"); break;
}
}
}
int getnum();
int SelectMenu()
{	
printf("학생 성적 관리 프로그램 0:종료\n");
printf("1:학생 추가 2:성적 입력 3: 삭제 4: 검색 5: 전체 보기\n");	
return getnum();
}
int getnum()
{
int num = 0;
if (scanf_s("%d", &num) == 0)
{
char buf[256];
gets_s(buf, sizeof(buf));
}
return num;
}
 
void InitScore(Student *stu);
void AddStudent()
{
int num = 0;
Student *stu = 0;
	
printf("추가할 학생 번호(1~%d):",MAX_STUDENT);
num = getnum();
if ((num < 1) || (num > MAX_STUDENT))
{
printf("범위를 벗어났습니다.\n");
return;
}
 
stu = stues + (num - 1);
if (stu->num)
{
printf("이미 자료가 있습니다.\n");
return;
}
 
stu->num = num;
printf("이름:");
scanf_s("%s",stu->name, MAX_NAME_LEN);
InitScore(stu);
}
void InitScore(Student *stu)
{
int s = 0;
for (s = 0; s < MAX_SUBJECT; s++)
{
stu->scores[s] = -1;
}
}
void InputScore(Student *stu);
void AddScore()
{
int num = 0;
Student *stu = 0;
 
printf("성적 입력할 학생 번호(1~%d):", MAX_STUDENT);
num = getnum();
if ((num < 1) || (num > MAX_STUDENT))
{
printf("범위를 벗어났습니다.\n");
return;
}
 
stu = stues + (num - 1);
if (stu->num==0)
{
printf("추가하지 않은 학생 자료입니다. 먼저 학생 자료를 추가하세요.\n");
return;
}
InputScore(stu);	
}