#include<stdio.h>

int main(void){
char str[81];
int sum;
int Osum;
int N;

scanf("%d", &N);

for(int i=0; i<N; i++){
scanf("%s", str);
int j=0;

sum=0;
while(str[j]!=0){
Osum=0;
while(str[j]=='O'){
Osum++;
sum+=Osum;
j++;
}
while(str[j]=='X'){
j++;
}

}
printf("%d", sum);
}

}