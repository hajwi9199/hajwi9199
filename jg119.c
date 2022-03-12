#include <stdio.h>

int main(){
int a,i,j;
int num1[101]={0,};
int num2=64;
int count=0;
int hab=0;
num1[0]=32;
num1[1]=32;

scanf("%d", &a);

for(i=2; i<10;i++){
num1[i]=num1[i-1]/2;
if(num1[i]==1){break;}
}//for(i)

for(j=0; j<7;j++){
if(a==64){
printf("%d",1);
break;
}
hab=hab + num1[j];
count++;
if(hab==a){
printf("%d",count);
break;
}else if(hab>a){
hab-=num1[j];
count--;
}//else if

}//for(j)

}
