#include <turboc.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ESC 27
#define SPACE 32
#define COURSE 224
#define ENTER 13
enum { BLACK,  DARK_BLUE,  DARK_GREEN, DARK_SKY_BLUE, DARK_RED,DARK_VOILET, DARK_YELLOW, GRAY,
  DARK_GRAY, BLUE, GREEN, SKY_BLUE, RED, VOILET,  YELLOW, WHITE, };

typedef struct _namecard
{
char namecard_name[20];  
char namecard_sosok[40]; 
char namecard_phone[15];
int  namecard_age;   
struct _namecard *next;  
struct _namecard *prev;  
}namecard; 

namecard *head, *tail;

void namecard_init(void);
void namecard_input(void);
void namecard_delete(void);
void namecard_search(void);  
void namecard_update(void);  
void namecard_output(void);
void namecard_save(void); 
void namecard_load(namecard *cur);
int namecard_menu(void);  

int namecard_menu(void)
{
int xxx=28;
int yyy=11;
int ch;
namecard_init();
namecard_load(head);
while(1)
{
system("cls");
setcolor("WHITE");
gotoxy(1, 1);
printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
gotoxy(1, 2); printf("┃                                                                          ┃");
gotoxy(1, 3); printf("┃                                                                          ┃");
gotoxy(1, 4); printf("┃                                                                          ┃");
gotoxy(1, 5); printf("┃                                                                          ┃");
gotoxy(1, 6); printf("┃                                                                          ┃");
gotoxy(1, 7); printf("┃                                                                          ┃");
gotoxy(1, 8); printf("┃                                                                          ┃");
gotoxy(1, 9); printf("┃                                                                          ┃"); 
gotoxy(1, 10); printf("┃                                                                          ┃");
gotoxy(1, 11); printf("┃                                                                          ┃");
gotoxy(1, 12); printf("┃                                                                          ┃");
gotoxy(1, 13); printf("┃                                                                          ┃");
gotoxy(1, 14); printf("┃                                                                          ┃");
gotoxy(1, 15); printf("┃                                                                          ┃");
gotoxy(1, 16); printf("┃                                                                          ┃");
gotoxy(1, 17); printf("┃                                                                          ┃"); 
gotoxy(1, 18); printf("┃                                                                          ┃");
gotoxy(1, 19); printf("┃                                                                          ┃");
gotoxy(1, 20); printf("┃                                                                          ┃");
gotoxy(1, 21); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

setcolor(YELLOW);
gotoxy(15, 11);printf("1. 명함 입력");
gotoxy(15 , 14); printf("2. 명함 수정");
gotoxy(15 , 17); printf("3. 명함 목록");
   
gotoxy(53 , 11); printf("4. 명함 검색");
gotoxy(53 , 14); printf("5. 명함 삭제");
gotoxy(53 , 17); printf("6. 이전 메뉴");

setcolor(RED);
  gotoxy(20 ,3 );  printf("┏━━━━━━━━━━━━━━━━━━┓");
  gotoxy(20 ,4 );  printf("┃                                    ┃");
  gotoxy(20 ,5 );  printf("┃                                    ┃");
  gotoxy(20 ,6 );  printf("┃                                    ┃");
  gotoxy(20 ,7 );  printf("┗━━━━━━━━━━━━━━━━━━┛");

setcolor(WHITE);
gotoxy(32, 5); printf("주     소      록");

setcolor(GRAY);
gotoxy(28, 11); printf("■");

while(1)
{
ch = getch();
if(ch == COURSE)
{
ch = getch();
switch(ch)
{

case RIGHT:
gotoxy(xxx, yyy);
printf("  ");
xxx= xxx+38;
if(xxx>70)
xxx=28;
gotoxy(xxx,yyy);
printf("■");
break;

case DOWN:
gotoxy(xxx, yyy);
printf("  ");
yyy=yyy+3;
if(yyy>18)
yyy=11;
gotoxy(xxx, yyy);
printf("■");
break;

case LEFT:
gotoxy(xxx,yyy);
printf("  ");
xxx=xxx-38;
if(xxx<27)
xxx=66;
gotoxy(xxx,yyy);
printf("■");
break;
case UP:
gotoxy(xxx, yyy);
printf("  ");
yyy = yyy-3;
if(yyy<10)
yyy=17;
gotoxy(xxx,yyy);
printf("■");
break;

default:
break;

}
}

else{
if(ch =ENTER)
{
if(xxx=28&&yyy==11)
namecard_input();
if(xxx=28 && yyy == 14)
namecard_update();
if(xxx=28 && yyy == 17)
namecard_output();
if(xxx=66 && yyy == 11)
namecard_search();
if(xxx=66 && yyy == 14)
namecard_delete();
if(xxx=66 && yyy == 17)
{
namecard_save();
return ;
}

}
break;
}
}
}
return 0;
}

void namecard_init(void)
{
head = (namecard *)malloc(sizeof(namecard));
tail = (namecard *)malloc(sizeof(namecard));
head->next = tail;
tail -> prev = head;
}
void namecrad_input(void)
{
namecard *add = (namecard *)malloc(sizeof(namecard));

system("cls");
setcolor(WHITE);
gotoxy(1,1); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
 gotoxy(1, 2); printf("┃                                                                          ┃");
 gotoxy(1, 3); printf("┃                                                                          ┃");
 gotoxy(1, 4); printf("┃                                                                          ┃");
 gotoxy(1, 5); printf("┃                                                                          ┃");
 gotoxy(1, 6); printf("┃                                                                          ┃");
 gotoxy(1, 7); printf("┃                                                                          ┃");
 gotoxy(1, 8); printf("┃                                                                          ┃");
 gotoxy(1, 9); printf("┃                                                                          ┃"); 
 gotoxy(1, 10); printf("┃                                                                          ┃");
 gotoxy(1, 11); printf("┃                                                                          ┃");
 gotoxy(1, 12); printf("┃                                                                          ┃");
 gotoxy(1, 13); printf("┃                                                                          ┃");
 gotoxy(1, 14); printf("┃                                                                          ┃");
 gotoxy(1, 15); printf("┃                                                                          ┃");
 gotoxy(1, 16); printf("┃                                                                          ┃");
 gotoxy(1, 17); printf("┃                                                                          ┃");
 gotoxy(1, 18); printf("┃                                                                          ┃");
 gotoxy(1, 19); printf("┃                                                                          ┃");
 gotoxy(1, 20); printf("┃                                                                          ┃");
 gotoxy(1, 21); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

setcolor(RED);
 gotoxy(10 ,4 ); printf("┏━━━━━━━━━━━━━━━━━━┓");
 gotoxy(10 ,5 ); printf("┃                                    ┃");
 gotoxy(10 ,6 ); printf("┃                                    ┃");
 gotoxy(10 ,7 ); printf("┃                                    ┃");
 gotoxy(10 ,8 ); printf("┗━━━━━━━━━━━━━━━━━━┛");
setcolor(YELLOW);
gotoxy(14, 6); printf("새로운 명함 정보를 입력 하세요");
setcolor(GRAY);
gotoxy(10, 10); printf("  ■  이  름  :  ");
scanf("%s", add->namecard_name);
fflush(stdin);
gotoxy(10, 12); printf("  ■  소  속  :  ");
scanf("%s", add->namecard_sosok);
fflush(stdin);
gotoxy(10, 14); printf("  ■  연락처  :  ");
scanf("%s", add->namecard_phone);
fflush(stdin);
gotoxy(10, 16); printf("  ■  나  이  :  "); 
scanf("%s", add->namecard_age);
fflush(stdin);

setcolor(RED); gotoxy(10 ,19 ); printf("  ■입력이 완료 되었습니다."); setcolor(GRAY);
Sleep(1000);

tail->prev->next = add;
add->prev = tail -> prev;
add->next = tail;
tail->prev = add;
}
void namecard_delete(void)
{
char str[20];
namecard *del, *loof;
loof = head -> next;
system("cls");
setcolor(WHITE);
gotoxy(1, 1); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
 gotoxy(1, 2); printf("┃                                                                          ┃");
 gotoxy(1, 3); printf("┃                                                                          ┃");
 gotoxy(1, 4); printf("┃                                                                          ┃");
 gotoxy(1, 5); printf("┃                                                                          ┃");
 gotoxy(1, 6); printf("┃                                                                          ┃");
 gotoxy(1, 7); printf("┃                                                                          ┃");
 gotoxy(1, 8); printf("┃                                                                          ┃");
 gotoxy(1, 9); printf("┃                                                                          ┃"); 
 gotoxy(1, 10); printf("┃                                                                          ┃");
 gotoxy(1, 11); printf("┃                                                                          ┃");
 gotoxy(1, 12); printf("┃                                                                          ┃");
 gotoxy(1, 13); printf("┃                                                                          ┃");
 gotoxy(1, 14); printf("┃                                                                          ┃");
 gotoxy(1, 15); printf("┃                                                                          ┃");
 gotoxy(1, 16); printf("┃                                                                          ┃");
 gotoxy(1, 17); printf("┃                                                                          ┃");
 gotoxy(1, 18); printf("┃                                                                          ┃");
 gotoxy(1, 19); printf("┃                                                                          ┃");
 gotoxy(1, 20); printf("┃                                                                          ┃");
 gotoxy(1, 21); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

setcolor(RED);
 gotoxy(10 ,4 ); printf("┏━━━━━━━━━━━━━━━━━━┓");
 gotoxy(10 ,5 ); printf("┃                                    ┃");
 gotoxy(10 ,6 ); printf("┃                                    ┃");
 gotoxy(10 ,7 ); printf("┃                                    ┃");
 gotoxy(10 ,8 ); printf("┗━━━━━━━━━━━━━━━━━━┛");

setcolor(YELLOW);
gotoxy(14,6); printf("삭제할 명함 정보를 입력 하세요");
setcolor(GRAY);
gotoxy(10, 10); printf("  ■  이  름  :  ");

gets(str);
fflush(stdin);
while( loof != tail){
if(strcmp(loof->namecard_name, str) == 0){
del = loof;
loof -> prev -> next = loof -> next;
loof -> next -> prev = loof -> prev;
free(del);

setcolor(RED); gotoxy(10, 12); printf("  ■ 삭제 되었습니다.   "); setcolor(GRAY);
Sleep(1500);
return;
}
loof = loof -> next;
}
}
void namecard_search(void)
{
char str[20];
namecard *loof;
loof = head -> next;
system("cls");
setcolor(WHITE);
gotoxy(1, 1); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
 gotoxy(1, 2); printf("┃                                                                          ┃");
 gotoxy(1, 3); printf("┃                                                                          ┃");
 gotoxy(1, 4); printf("┃                                                                          ┃");
 gotoxy(1, 5); printf("┃                                                                          ┃");
 gotoxy(1, 6); printf("┃                                                                          ┃");
 gotoxy(1, 7); printf("┃                                                                          ┃");
 gotoxy(1, 8); printf("┃                                                                          ┃");
 gotoxy(1, 9); printf("┃                                                                          ┃"); 
 gotoxy(1, 10); printf("┃                                                                          ┃");
 gotoxy(1, 11); printf("┃                                                                          ┃");
 gotoxy(1, 12); printf("┃                                                                          ┃");
 gotoxy(1, 13); printf("┃                                                                          ┃");
 gotoxy(1, 14); printf("┃                                                                          ┃");
 gotoxy(1, 15); printf("┃                                                                          ┃");
 gotoxy(1, 16); printf("┃                                                                          ┃");
 gotoxy(1, 17); printf("┃                                                                          ┃");
 gotoxy(1, 18); printf("┃                                                                          ┃");
 gotoxy(1, 19); printf("┃                                                                          ┃");
 gotoxy(1, 20); printf("┃                                                                          ┃");
 gotoxy(1, 21); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

setcolor(RED);
 gotoxy(10 ,4 ); printf("┏━━━━━━━━━━━━━━━━━━┓");
 gotoxy(10 ,5 ); printf("┃                                    ┃");
 gotoxy(10 ,6 ); printf("┃                                    ┃");
 gotoxy(10 ,7 ); printf("┃                                    ┃");
 gotoxy(10 ,8 ); printf("┗━━━━━━━━━━━━━━━━━━┛");
setcolor(YELLOW);
gotoxy(14, 6); printf("검색할 명함 정보를 입력 하세요");
setcolor(GRAY);
gotoxy(10, 10); printf("  ■  이  름  : ");
gets(str);
while(loof != tail)
{
if(strcmp(loof -> namecard_name, str) == 0)
{
gotoxy(10 ,11 ); printf("━━━━━━━━━━━━━━━━━━━━━━");
   gotoxy(10 ,13 ); printf("  ■  이  름  : %s ",str);                         
   gotoxy(10 ,14 ); printf("  ■  소  속  : %s ", loof->namecard_sosok);                         
   gotoxy(10 ,15 ); printf("  ■  연락처  : %s ", loof->namecard_phone);
   gotoxy(10 ,16 ); printf("  ■  나  이  : %d ", loof->namecard_age);
   gotoxy(10 ,18 ); printf("━━━━━━━━━━━━━━━━━━━━━━\n\n\n\n");
system("pause");
system("cls");
return;
}
loof = loof -> next;
}
setcolor(RED); gotoxy(10 ,12 ); printf("  ■ [ %s ]님을 찾을 수 없습니다.",str); 
setcolor(GRAY);
Sleep(800);
}

void namecard_update(void)
{
char str[20];
namecard *loof;
loof = head -> next;
setcolor(WHITE);
gotoxy(1, 1); printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
 gotoxy(1, 2); printf("┃                                                                          ┃");
 gotoxy(1, 3); printf("┃                                                                          ┃");
 gotoxy(1, 4); printf("┃                                                                          ┃");
 gotoxy(1, 5); printf("┃                                                                          ┃");
 gotoxy(1, 6); printf("┃                                                                          ┃");
 gotoxy(1, 7); printf("┃                                                                          ┃");
 gotoxy(1, 8); printf("┃                                                                          ┃");
 gotoxy(1, 9); printf("┃                                                                          ┃"); 
 gotoxy(1, 10); printf("┃                                                                          ┃");
 gotoxy(1, 11); printf("┃                                                                          ┃");
 gotoxy(1, 12); printf("┃                                                                          ┃");
 gotoxy(1, 13); printf("┃                                                                          ┃");
 gotoxy(1, 14); printf("┃                                                                          ┃");
 gotoxy(1, 15); printf("┃                                                                          ┃");
 gotoxy(1, 16); printf("┃                                                                          ┃");
 gotoxy(1, 17); printf("┃                                                                          ┃");
 gotoxy(1, 18); printf("┃                                                                          ┃");
 gotoxy(1, 19); printf("┃                                                                          ┃");
 gotoxy(1, 20); printf("┃                                                                          ┃");
 gotoxy(1, 21); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");

setcolor(RED);
 gotoxy(10 ,4 ); printf("┏━━━━━━━━━━━━━━━━━━┓");
 gotoxy(10 ,5 ); printf("┃                                    ┃");
 gotoxy(10 ,6 ); printf("┃                                    ┃");
 gotoxy(10 ,7 ); printf("┃                                    ┃");
 gotoxy(10 ,8 ); printf("┗━━━━━━━━━━━━━━━━━━┛");

 setcolor(YELLOW);
 gotoxy(14 ,6 ); printf("검색할 명함 정보를 입력 하세요");
 setcolor(GRAY);

 gotoxy(10 ,10 ); printf("  ■  이  름  : ");

gets(str);

while(loof != tail)
{
if(strcmp(loof -> namecard_name, str) == 0)
{
   gotoxy(10 ,11 ); printf("━━━━━━━━━━━━━━━━━━━━━━");
   gotoxy(10 ,13 ); printf("  ■변경될 이름 입력 : ");
gets(loof->namecard_name);

   gotoxy(10 ,14 ); printf("  ■변경될 소속 입력 : ");
scanf("%s", loof->namecard_sosok);
fflush(stdin);

   gotoxy(10 ,15 ); printf("  ■변경될 번호 입력 : ");
scanf("%s", loof->namecard_phone);
fflush(stdin);

   gotoxy(10 ,16 ); printf("  ■변경될 나이 입력 : ");
scanf("%d", &loof->namecard_age);
fflush(stdin);
gotoxy(10 ,18 ); printf("━━━━━━━━━━━━━━━━━━━━━━");
setcolor(RED); gotoxy(10 ,19 ); printf("  ■변경이 완료 되었습니다."); 
setcolor(GRAY);
Sleep(1000);

return;
}
loof = loof->next;
}
}
void namecard_output(void)
{
namecard *loof; 
loof = head->next;

system("cls");
setcolor(WHITE); printf("   ■ 저장된 이름 목록  ■\n\n");
while(loof != tail)
{
setcolor(YELLOW); printf(" -> %s\n", loof->namecard_name);
setcolor(GRAY);
loof = loof->next;
}
printf("\n");
printf("\n");
system("pause");
system("cls");
}
void namecard_save(void)
{
namecard *loof;
FILE *fp = fopen("namecard.txt", "w");
loof = head->next;

while(loof != tail)
{
fprintf(fp,"%s %s %s %d\n",loof->namecard_name, loof->namecard_sosok, loof->namecard_phone, loof->namecard_age);
loof = loof->next;
}
fclose(fp);
}
void namecard_load(namecard *cur)
{
FILE * fp = fopen("namecard.txt","r");
namecard *new_node; 
if( fp == NULL )
{
printf("  ■저장된 데이터 파일 없습니다.\n\n");
return;
}
while(!feof(fp))
{
new_node = (namecard *)malloc(sizeof(namecard));
fscanf(fp, "%s %s %s %d\n", new_node -> namecard_name, new_node -> namecard_sosok, new_node -> namecard_phone, &new_node -> namecard_age);

cur -> next -> prev = new_node;
new_node -> prev = cur;
new_node -> next = cur -> next;
cur -> next = new_node;
}

system("cls");
setcolor(WHITE);
 gotoxy(7 ,9 );  printf(" ■저장된 데이터를 불러 옵니다.");
 gotoxy(7 ,10 );  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
 gotoxy(7 ,11 );  printf("┃                                                            ┃");
 gotoxy(7 ,12 );  printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
Sleep(100);
setcolor(WHITE); gotoxy(7, 11);
 printf("┃                                                            ┃"); Sleep(100);
 setcolor(RED);   gotoxy(9 ,11 );   printf("■■■");
 setcolor(DARK_RED);  gotoxy(15 ,11 );  printf("■■■"); Sleep(100);
 setcolor(DARK_VOILET); gotoxy(21 ,11 );  printf("■■■"); Sleep(100);
 setcolor(DARK_YELLOW); gotoxy(27 ,11 );  printf("■■■"); Sleep(100);
 setcolor(YELLOW);  gotoxy(33 ,11 );  printf("■■■"); Sleep(100);
 setcolor(DARK_BLUE); gotoxy(39 ,11 );  printf("■■■"); Sleep(100);
 setcolor(BLUE);   gotoxy(45 ,11 );  printf("■■■"); Sleep(100);
 setcolor(SKY_BLUE);  gotoxy(51 ,11 );  printf("■■■"); Sleep(100); 
 setcolor(DARK_GREEN); gotoxy(57 ,11 );  printf("■■■"); Sleep(100);
 setcolor(GREEN);  gotoxy(63 ,11 );  printf("■■■"); Sleep(200); setcolor(GRAY);

 fclose(fp);
}
int main(void)
{
namecard_menu();
return 0;
}