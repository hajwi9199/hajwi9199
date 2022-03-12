#include <stdio.h>
#include <string.h>

int main() {
int N, check = 0, count = 0;
int i,j,k;
char str[101], last = 'A', str2[101];

scanf("%d", &N);

for (i = 0; i < N; i++) {
scanf("%s", str);

for (j = 0; j < strlen(str); j++) {
for (k = 'a'; k <= 'z'; k++) {
if (str[j] == k) {
if (str[j] != str[j + 1]) {
count++;
str2[count - 1] = str[j];
}
break;
}
}
}

for (j = 0; j < count; j++) {
for (k = j + 1; k < count; k++) {
if (str2[j] == str2[k])
{
last = str2[k];
break;
}
}
if (str2[j] == last)
break;
if (j == count - 1)
check += 1;
}
count = 0;
last = 'A';
}
printf("%d", check);
}