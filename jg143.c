#include <stdio.h>

int main(void){
int num1;
char str[52][52];
char str1[52];
int count=1;
int i,j;

scanf("%d", &num1);

for(i=0; i<num1; i++)
{
scanf("%s",str[i]);
}//for(i)

for(j=0; j<51; j++){
count=1;
for(i=1; i<num1; i++){
if(str[i][j] != str[0][j])
{
count=0;
}
}//for(i)

if(count!=0) 
{
str1[j] = str[0][j];
}else{
str1[j]='?';
}

}//for(J)

printf("%s", str1);
}