#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define delay_time 1000

void input_file(void);
void output_file(void);
void copy_image(void);
void delay(void);

int main(){

back:
system("cls");
printf("+---------------------------+\n");
printf("|                           |\n");
printf("|     [즐거운 파일입출력]   |\n");
printf("|                           |\n");
printf("|      f. 입력              |\n");
printf("|      i. 출력              |\n");
printf("|      l. 이미지 복사       |\n");
printf("|      e. 끄기              |\n");
printf("|                           |\n");
printf("+---------------------------+\n\n");

int what;

while(true){
what = getch();
switch (what){
case 'f':input_file(); break;
case 'i':output_file(); break;
case 'l':copy_image(); break;
case 'e': exit(1);
default: printf("목록 중에 고르세요\n"); Sleep(1000);
}
goto back;
}
}


void input_file(void){
system("cls");

puts("입력할 내용을 적어주세요. 최대 100글자\n");
char input[100];
gets(input);

FILE *fp =fopen("text.txt", "w");
if(fp == NULL)
puts("메롱");
else{
fputs(input, fp);
puts("잘 추가되었습니다");
}
fclose(fp);
puts("\n전 화면으로 돌아갑니다");
delay();
}

void output_file(void){
system("cls");

puts("현재 입력되어 있는 내용을 불러옵니다");
char f[100];
int quit;
FILE *fp = fopen("text.txt", "r");
while(!feof(fp)){
fgets(f, sizeof(f), fp);
puts(f);
}
fclose(fp);
puts("\n전 화면으로 돌아가려면 q 를 누르세요");
scanf("%d", &quit);
if(quit == 'q')
delay();
}

void copy_image(void){
system("cls");

FILE *fp, *fp2;
char a;

fp = fopen("test.jpeg", "rb");
fp2 = fopen("test2.jpeg", "wb");

while(!feof(fp)){
a = fgetc(fp);
fputc(a, fp2);
}
fclose(fp);
fclose(fp2);
puts("파일이 잘 복사되었습니다");
puts("\n전 화면으로 돌아갑니다");
delay();
}

void delay(void){
for(int i=2l i>0; i--){
printf("%d..", i);
Sleep(delay_time);
}
}