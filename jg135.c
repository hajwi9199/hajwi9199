#include <stdio.h>

int main() 
{ 
int N;
int i,j,h;
int num2,num3;
int num1[1000]={ 0, };
int a[1000]={ 0, };
int b[1000]={ 0, };
int count=0;

scanf("%d", &N);
for(i=0; i<N; i++)
{
scanf("%d", &num1[i]);
}//for
for(i=0; i<N/2;i++)
{
a[i]=num1[i];
}//for
h=i;
for(j=h; j<N; j++)
{
b[j]=num1[j];
}//for
while(count!=N/2-1)
{
for(i=1; i<N/2;i++)
{
if(a[i]<a[i-1])
{
num2=a[i-1];
a[i-1]=a[i];
a[i]=num2;
}//if
}//for
count++;
}//while


for(i=0; i<N/2;i++){
printf("%d", a[i]);
}//a배열 값 확인문

count=0;

while(count!=N/2)
{
for(j=h+1; j<N;j++)
{
if(b[j]<b[j-1])
{
num2=b[j-1];
b[j-1]=b[j];
b[j]=num2;
}//if
}//for
count++;
}//while

for(j=h; j<N; j++){
printf("%d", b[j]);
}//b배열 값 확인문

printf("\n");

count=0;
i=0; 
j=h;
while(count!=N){
if(b[j]<a[i]){
if(b[j]==0){
num1[count]=a[i];
count++;
i++;
continue;
}
num1[count]=b[j];
count++;
j++;
}else{
if(a[i]==0){
num1[count]=b[j];
count++;
j++;
continue;
}
num1[count]=a[i];
count++;
i++;
}//if
}//while

for(i=0; i<N; i++){
printf("%d", num1[i]);
}

}

