/*
1 1*1    1*2-1

11  2   1*1+1

111  3
1 2 1    4  2*2

1 2 1 1  5  
1 2 2 1 6  2*2 +2
1 2 2 1 1 7 
1 2 2 2 1 8
1 2 3 2 1 9 3*3
12321 3*3
*/

#include <stdio.h>

int main(){
int N;
int minus;
int count;
scanf("%d", &N);
int x,y;
while(N--!=0){
scanf("%d %d", &x, &y);
y-=x;
count=0;

minus=1;
while(count==0){
if(minus*minus<=y && (minus+1)*(minus+1)>y){
if(minus*minus==y){
count=minus*2-1;
}else if(minus*minus+minus>=y){
count=minus*2;
}else{
count=(minus+1)*2-1;
}
}
minus++;
}
printf("%d\n", count);
}

}