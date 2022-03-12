#include <stdio.h>

int main(void)
{
FILE * ms=fopen("mystory.txt","rt");
char str[50];
int i;

for(i=0; i<5; i++)
{
fgets(str, sizeof(str), ms);
printf("%s", str);
}

fclose(ms);
return 0;
}
