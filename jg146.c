#include <stdio.h>
#include <string.h>


int main(void){
char str[101]; 
int len, sum;
int i;

scanf("%s",  str);
len = strlen(str);
sum = strlen(str);
for(i=0; i<len; i++){ 
      
if( str[i] == 'c' || str[i] =='s' || str[i] == 'z')
{  
if (str[i+1] == '=' || str[i+1] == '-') 
{
sum--; 
}//if
}else if ( str[i] == 'n' || str[i] =='l')
{ 
if (str[i+1] == 'j')
{
sum--; 
}
}
else if (str[i] =='d')
{ 
if(str[i+1] == '-')
{ 
sum--; 
}else if(str[i+1] == 'z' && str[i+2] == '=')
{
sum--; 
}
}
}

printf("%d\n", sum);
return 0;
}