#include <stdio.h>

int main(){
int a,max=0;
int i;
int count=0;

for(i=1; i<=9; i++){
scanf("%d", &a);
if(max<=a){
max=a;
count=i;
}

}
printf("%d\n%d",max, count);
}