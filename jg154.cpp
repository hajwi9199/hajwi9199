#include <stdio.h>
#include <string.h>

int main(){
int num1;
char str[50];
int count1;
int count2;
int i,j;

scanf("%d", &num1);

for(i=0; i<num1; i++){
count1=0;
count2=0;
scanf("%s", str);

for(j=0; j<strlen(str); j++)
{
if(str[i]=='('){
count1++;
}else if(str[i]==')'){
count2--;
}
}

if(count1==count2){
printf("YES\n");
}else{
printf("NO\n");
}

}//for(i)

}