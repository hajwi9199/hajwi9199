#include <stdio.h>

int main(){
int a,b,v;
double count;

scanf("%d %d %d", &a, &b, &v);

count = (double)(v-b) / (a - b);

printf("%.f", count);
}