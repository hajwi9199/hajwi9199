#include <stdio.h>

int main(){
int c,k,p;
int i;
int sum=0;

scanf("%d %d %d", &c, &k, &p);
for(i=1; i<=c;i++){
sum=sum+k*i+p*i*i;
}
printf("%d", sum);
}