#include <stdio.h>

int main(){
int a,b;
int i,j,k;
int sum[4]={0,};
int count =0;

scanf("%d", &a);

if(a<100){
printf("%d",a);
}else if(a==100){
printf("99");
}else if(a==1000){
printf("144");
}else{
for(i=100; i<=a; i++){
j=i;
for(k=1; k<=3;k++)
{
sum[k]=j%10;
j/=10;
}//for(k)
if(sum[1]-sum[2]==sum[2]-sum[3]){
count++;
}
}//for(i)
printf("%d",count+99);

}//if, else


}