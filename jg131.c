#include <stdio.h>

long GetFile();

int main(){
char str[100];
FILE * fp = fopen("test.txt", "rt");
fgets(str,100,fp);
fputs(str, fp);
pritnf("파일의 크기 : %d \n", GetFile); 
}

GetFile(){
long fpos;
fpos = ftell(fp);
fseek(fp,fpos,SEEK_SET);
}
