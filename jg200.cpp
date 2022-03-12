#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char name[10][10];
char phone[10][10];
int time[10];
int max=0;
int count=0;

for(int i=0; i<4; i++){
printf("%d번째 근무자\n", i+1);
printf("이   름: ");
scanf("%s", name[i]);
printf("전화번호: ");
scanf("%s", phone[i]);
printf("근무시간: ");
scanf("%d", &time[i]);
if(max<time[i]){
max=time[i];
count=i;
}
}


for(int i=0; i<4; i++)
{
printf("이름:%s  전화번호:%s  근무시간:%d  총급여:%d\n", name[i], phone[i], time[i], time[i]*5580);
}
printf("가장 많이 일한 사람: %s이며 지불해야할 금액: %d",name[count], time[count]*5580);

}