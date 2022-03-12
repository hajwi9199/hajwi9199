#include <stdio.h>

int main(void)
{
int num=0;
int u=0;
int y=0;
while(u<100)
{
u+=2;
y+=u;
}
printf("합: %d \n", y);
}