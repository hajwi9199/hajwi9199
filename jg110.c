#include <stdio.h>

int main(void)
{
FILE * ms=fopen("mystory.txt","wt");

if(ms==NULL)
{
puts("파일오픈 실패!");
return -1;
}
fputs("#이름: 윤성우\n",ms);
fputs("#주민번호: 900208-1012589\n",ms);
fputs("#전화번호: 010-1111-2222\n",ms);
fclose(ms);
return 0;
}
