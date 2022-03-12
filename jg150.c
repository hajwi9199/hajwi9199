#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char str[100];
char str2[100];
int N = 0;
int count = 0;
int i,j,k;
int len;
int check = 0;
scanf("%d", &N);

len = strlen(str);

for (i = 0; i < N; i++)
{
scanf("%s", &str);
check = 0;
		
for (j = 0; j < len; j++)
{
str2[j] = str[j];

for (k = 0; k < j; k++)
{
if (str[j] == str2[k] && (str[j-1] != str2[k]))
{
check = 1;
break;
}
}
}
if(check == 0)
count++;
}
printf("%d", count);
}