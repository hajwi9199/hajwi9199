#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count=0;
char str[1001], stack[1001];

int main(void)
{
int t;
scanf("%d ",&t);
for(int i=0;i<t;i++) //반복문 실행
{
fgets(str, 1001, stdin); //문장입력받기
for(int i=0;i<strlen(str)-1;i++)
{
if(str[i]!=' ')
{
stack[count++] = str[i];
}

        if(str[i]==' ' || i==strlen(str)-2)
        {
            for(int i=count-1;i>=0;i--)
                printf("%c",stack[i]);
            printf(" ");
            count=0;
        }
    }
    printf("\n");
}
return 0;
}