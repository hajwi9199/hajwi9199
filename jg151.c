#include <stdio.h>
#include <string.h>

int main(void) {
int i, n, sum;
int count;
int num1[26] = {0,};
char str[101];
	
scanf("%d", &n);
	
count = n;

while(count--) {
scanf("%s", str);

sum = str[0] % 97;	

for (i = 1; i < strlen(str); i++) {
if (sum != str[i] % 97) {
if (num1[str[i] % 97] != 0) {
n--;
break;
}
else {
num1[sum] = 1;
sum = str[i] % 97;
}
}
}
}

printf("%d\n", n);

return 0;
}