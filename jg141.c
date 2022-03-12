#include <stdio.h>

int main(void){
int num1[9];
int i;
int sum=0;
int max=0;

for(i=1; i<=8; i++){
scanf("%d", &num1[i]);
}//for(i)

for(i=1; i<=8; i++){
if(i%2!=0){
sum-=num1[i];

if(max<sum){
max=sum;
}//if(max)

}else{
sum+=num1[i];

if(max<sum){
max=sum;
}//if(max)

}
}

printf("%d", max);

}