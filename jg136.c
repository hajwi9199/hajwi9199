﻿#include <stdio.h>

long GetFile(FILE * fp);

int main(){
char str[100];
FILE * fp=fopen("ABC.txt.", "rt");
fgets(str, 100, fp);
fputs(str, stdout);
printf("파일의 크기: %ld \n", GetFile(fp));
fgets(str, 100, fp);
fputs(str, stdout);
printf("파일의 크기: %ld \n", GetFile(fp));
fgets(str, 100, fp);
fputs(str, stdout);
fclose(fp);
return 0;
}

long GetFile(FILE * fp){
long fpos;
long fsize;
fpos = ftell(fp);

fseek(fp,0,SEEK_END);
fsize=ftell(fp);
fseek(fp,fpos,SEEK_SET);
return fsize;
}
