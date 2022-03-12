int y;

SStar(int num1)
{
int num2, num4;
int i;
int u;
int j;
int k;
int num5 = 1;
int num3 = 0;
int num6=1;
int num7;
int num8;

num3=num1;
num4=num1;
num5=num1;

for(k=1; k<=num1; k+=2)
{
for(u=num3; u<y; u++)
{
printf(" ");
}
num3++;
for(i=num5; i<=num4; i++)
{
printf("*");
}
num5-=2;
printf("\n");
}
}


Star(int num1)
{
int u;
int k;
int i=1;
int j;
int num2;
int num3=1;
int num4;
int num5;

num5 = num1;
num2 = num1;
num4 = num1;
y = num1;

for(k=1; k<num1; k+=2)
{
for(u=num5; u<y; u++)
{
printf(" ");
}
y++;
for(i=num3; i<=num2; i++)
{
printf("*");
}
num3++;
num2--;
printf("\n");
}
}


int main(void)
{
int num1, num2, num3;
while(1)
{

printf("밑변:");
scanf("%d", &num1);
if(num1 % 2 ==0)
{
printf("다시입력");
}
else
{
Star(num1);
SStar(num1);
}
if(num1==0)
{
printf("앱종료");
exit(0);
}
y = 0;
}
}