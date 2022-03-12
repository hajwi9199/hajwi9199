#include <stdio.h>

int main(){
int num1[101][1001]={0,};
int num2[1001]={0,};
double sum[1001]={0,};
int count=0;
double final[101]={0,};
int c,n;

int i, j;

scanf("%d", &c);

for(i=0; i<c; i++){
scanf("%d", &n);
for(j=0; j<n; j++){
scanf("%d", &num1[i][j]);
sum[i]+=num1[i][j];
}//for(j)
sum[i]/=n;

for(j=0; j<n; j++){

if(num1[i][j]>sum[i]){
count++;
}//if

}//for(j)
final[i]=(double)(count*100)/n;
count=0;
}//for(i)

for(i=0; i<c; i++){
printf("%.3f%%\n", final[i]);
}
}