#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
int row, col;
scanf("%d %d", &row, &col);

char** mine = malloc(sizeof(char*) * col);
for(int i = 0; i<col; i++){
mine[i] = malloc(sizeof(char) * (row + 1));
}

for(int i=0; i<col; i++){
scanf("%s", mine[i]);
}
for(int i=0; i<col; i++){
for(int j=0; j<row; j++){
int count = 0;
if(mine[i][j]=='*') printf("*");
else if(mine[i][j] == '.'){
if(j>0 && mine[i][j-1] == '*') count++;
if(j<row-1 && mine[i][j+1] == '*') count++;
if(i>0){
if(j>0 && mine[i-1][j-1] == '*') count++;
if(j<row-1 && mine[i-1][j+1] == '*') count++;
if(mine[i-1][j] == '*') count++;
}
if(i<col-1){
if(j>0 && mine[i+1][j-1] == '*') count++;
if(j<row-1 && mine[i+1][j+1] == '*') count++;
if(mine[i+1][j] == '*') count++;
}
printf("%d", count);
count = 0;
}
else if(mine[i][j] != '\n' && mine[i][j] != '\0') printf("wrong input");
}
printf("\n");
}
for(int i = 0; i<col; i++) free(mine[i]);
free(mine);
return 0;
}