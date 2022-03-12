#include <stdio.h>

int main(void)
{
int num1[100]={""};
int i;
int num2;
int u=0;

scanf("%d", &num2);

for(i=0; i<num2; i++){
scanf("%d", &num1[i]);
}
for(u=0;u<2;u++){
for(i=0;i<num2; i++){
printf("%d", num1[i]);
}
}
}