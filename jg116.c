#include <stdio.h>

int Fibo(int num1, int c, int d);

int main(){
int a;
scanf("%d", &a);
Fibo(a,1,1);
return 0;
}

int Fibo(int num1, int c, int d){
int num2=1,num3=1;
int hab;
if(num1==0)
{
return 1;
}


printf("%d",c);
hab=c+d;

Fibo(num1-1,d,hab);

}