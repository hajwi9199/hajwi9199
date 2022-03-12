#include <stdio.h>
int main(){

char str[100]={'\0',};
int num1;
int i=0;

scanf("%s", &str);

while(1){
if(str[i] >= 65 && str[i]<=90)
{
str[i]+=32;
}
if(str[i] >= 97 && str[i]<=122)
{
str[i]-=32;
}
if(str[i]=='\0')
break;
}
printf("%s", str);

}