#include <stdio.h>

char *mystrcpy(char *dest, char *src);

int main(){
char str[100]="Hello World";
char dest[100];
printf("원본 %s \n", str);
mystrcpy(dest, str);
printf("복사문 %s \n", dest);
return 0;
}

char *mystrcpy(char *dest, char *src)
{
char *origin;
for(origin = dest; *dest = *src; dest++, src++);
return origin;
}