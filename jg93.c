#inculde <stdio.h>

long factorial(long n);

int main()
{
printf("7! = %d \n", factorial(7));
}

long factorial(long n)
{
if(n == 0)
{
return 1;
}
else
{
return n * factorial(n-1);
}
}
