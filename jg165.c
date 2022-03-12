#include <stdio.h>
 
int main() {
int student;
int num1[1000][5];
int i,j,k;
int age=0;
int max=0;
int check=0;
int count[1000]={0,};

scanf("%d", &student);

for(i=0; i<student; i++){

for(j=0; j<5; j++){
scanf("%d", &num1[i][j]);
}//for(j)

}//for(i)

for(j=0; j<student-1; j++){

for(i=j+1; i<student; i++){
for(age=0; age<5; age++){
if(num1[j][age]==num1[i][age]){
count[j]++;
count[i]++;
}//if
}//for(age)
}//for(i)
if(check<count[j]){
max=j+1;
check=count[j];
}

}//for(j)

if(check<count[student-1]){
max=student-1;
}

printf("%d", max);
}
