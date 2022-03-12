#include <stdio.h>

int main(void)
{
FILE * ms=fopen("mystory.txt","at");

if(ms==NULL)
{
puts("파일오픈 실패!");
return -1;
}
fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n",ms);
fputs("#취미: 축구\n",ms);
fclose(ms);
return 0;
}
