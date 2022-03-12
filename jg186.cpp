#include<stdio.h>
#include<string.h>

int main() {
char str[100];
char str1[100];

scanf("%s", str);

strcpy(str1,str);

int count=0;
int i=0;
while (str1[i]!=0){
count++;
i++;
}
int b;
for (i = 0; i < count / 2; i++) {
b = str1[i];
str1[i] = str1[count - i - 1];
str1[count - i - 1] = b;
}

for (i = 0; i < count; i++){
if(str[i]!=str1[i]){
printf("0");
return 0;
}
}
printf("1");
}