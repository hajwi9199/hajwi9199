#include <stdio.h>

int main(void)
{
char array;
int i;
 scanf("%[^\n]s", array);
int ss;
int ss = strlen(array); 

for (i = 0; i = ss; i++) {
    if (array[i] != ' '){
        printf("%c", array[i]);
        
    }
}
}