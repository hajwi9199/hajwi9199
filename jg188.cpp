#include<stdio.h>

int num[41];

int Fibo(int n){
if(n<=0){
num[0]=0;
return 0;
}else if(n==1){
num[1]=1;
return 1;
}
if(num[n]!=0){
return num[n];
}else{
return num[n] =Fibo(n-1)+Fibo(n-2);
}
}

int main(void){
int num1;
scanf("%d", &num1);

while(num1>0){
int x;
scanf("%d", &x);
if(x==0){
printf("%d %d\n", 1, 0);
}else if(x==1){
printf("%d %d\n", 0, 1);
}else{
Fibo(x);
printf("%d %d\n", num[x-1], num[x]);
}
num1--;
}
return 0;
}