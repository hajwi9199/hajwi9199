#include <stdio.h>

int main(){
int N, i, j;
int num, count=0, check;

scanf("%d", &N);

for(i=0; i<N; i++){
scanf("%d", &num);
check=0;
if(num==1){
continue;
}
for(j=2; j<num; j++){
if(num%j==0){
check=1;
}
}
if(check==0){
count++;
}
}
printf("%d\n", count);
return 0;
}