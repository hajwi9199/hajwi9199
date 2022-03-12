#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
int num1, len;
int i;
char * str;

printf("문자열 최대길이 입력: ");
scanf("%d", &num1);
getchar();

str=(char *)malloc(sizeof(char)*(num1+1));

printf("문자열 입력: ");
fgets(str, num1+1, stdin);
str[strlen(str)-1]=0;
len=strlen(str);
for(i=len; i>0; i++){
if(str[i]==' '){
printf("%s ", &str[i+1]);
str[i]=0;
}
}
printf("%s", &str[0]);
free(str);
return 0;
}