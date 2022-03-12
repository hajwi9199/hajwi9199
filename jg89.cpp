#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char str[3];
char compare[3]={'_','_','_'};
char input;

int over=0;

gets(str);

for(int i=0; i < 5;i++)
{
scanf("%c", &input);

getchar();

for(int j=0;j<3;j++)
{
if(input==str[j])
{
over++;
compare[j]=input;
printf("%c", compare[j]);
}

else
{
printf("%c", compare[j]);
}

if(over==3)
{
exit(0);
}
}
printf("\n");
}
}
