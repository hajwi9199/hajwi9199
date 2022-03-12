#include <stdio.h>
void reverseSentence();

int main(){
printf("문장 입력: ");
reverseSentence();
printf("\n");
return 0;
}

void reverseSentence(){
char h;
scanf("%c", &h);
if(h != '\n'){
reverseSentence();
printf("%c", h);
}
}