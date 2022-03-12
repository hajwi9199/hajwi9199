#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1
#define bool int

typedef struct
{
bool reser;
char* name[20];
}

planeType;
planeType* reser(planeType** plane)
{
int sel, su;
printf("몇번 좌석을 예약하시겠습니까?\n");
scanf("%d", &su);
sel=su-1;
if(plane[sel]->reser==1)
{
printf("이미 예약이 되어잇는 좌석입니다.(좌석번호:%d)\n", su);
}
else
{
plane[sel]->reser=1;
printf("예약하시룬의 성함을 입력하여 주십시오.\n");
scanf("%s", plane[sel]->name);
printf("예약이 되었습니다.(좌석번호:%d)\n", su);
}
return *plane;
}
planeType* output(planeType** plane)
{
for(int i=0;i<10;i++)
{
if(plane[i]->reser==1)
{
printf("%d번:예약된 좌석\n", i+1);
}
else
{
printf("%d번:예약이 안된 좌석\n", i+1);
}
}
return *plane;
}
planeType* cancel(planeType** plane)
{
int sel, su;
char c;
printf("몇번 좌석을 예약취소 하시겠습니까?\n");
scanf("%d", &su);
flushall();
sel=su-1;
if(plane[sel]->reser==0)
{
printf("예약이 되어있지 않는 좌석입니다.(좌석 번호:%d)\n", su);
printf("좌석 번호를 다시 입력하여 주십시오.\n");
}
else
{
printf("정말로 에약을 취소하시겠습니까?(Y/N)\n");
scanf("%c", &c);
if(c=='Y' || c=='y')
{
plane[sel]->reser=0;
printf("예약이 취소되었습니다.\n");
}
else
{
printf("예약이 취소되지 않았습니다.\n");
}
}
return *plane;
}
main()
{
int sel;
planeType* plane[10];
for(int i=0;i<10;i++)
{
plane[i] = (planeType*)malloc(sizeof(planeType));
plane[i]->reser=0;
}
while(sel!=4)
{
printf("========================\n");
printf("좌석 예약 프로그램\n");
printf("1.좌석예약\n");
printf("2.예약취소\n");
printf("3.예약 상태 출력\n");
printf("4.종료\n");
scanf("%d", &sel);
flushall();
switch(sel)
{
case 1:
reser(plane);
break;
case 2:
cancel(plane);
break;
case 3:
output(plane);
break;
}
}
printf("프로그램을 종료합니다.\n");
getchar();
return 0;
}
