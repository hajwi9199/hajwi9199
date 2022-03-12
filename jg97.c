#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE1 10
#define SIZE2 10
int array(int grade[SIZE2][SIZE1]);
void array_print(int grade[SIZE2][SIZE1]);
int main(){
int grade[SIZE2][SIZE1], i, j;
srand((int)time(NULL));
for(i=0;i<SIZE2;i++){
for(j=0;j<SIZE1;j++){
grade[i][j]=rand()%10+1;
}
}
array_print(grade);
printf("총합은 = %d\n", array(grade));
return 0;
}
int array(int grade[SIZE2][SIZE1]){
int i, j, temp=0, isum=0;
for(i=0;i<SIZE2;i++){
for(j=0;j<SIZE1;j++){
temp+=grade[i][j];
}
}
return temp;
}
void array_print(int grade[SIZE2][SIZE1]){
int i, j;
for(i=0;i<SIZE2; i++){
for(j=0;j<SIZE1;j++){
printf("%4d", grade[i][j]);
if(j==SIZE1-1)
printf("\n");
}
}
}