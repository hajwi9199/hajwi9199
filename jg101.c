#include <stdio.h>

void swap(unsigned char *Px,unsigned char *Py);

int main()

{
unsigned char arr[]="Rotation";
unsigned char *arrP = arr;
int iCnt;
int jCnt;
int isize;
int y;
isize = sizeof(arr)/sizeof(arr[0]);
y = isize;

	
for(iCnt=0; iCnt < isize-1; ++iCnt)
{
printf("%d\n",iCnt);
if(y==isize)
{
swap(arrP,arrP+y-1);
for(	jCnt = 1; jCnt < isize; ++jCnt)
{
printf("%c",*(arr+jCnt));
}
y=y-1;
putchar('\n');
continue;
}
else
{
swap(arrP+y-1,arrP+y);
for(jCnt = 1; jCnt < isize; ++jCnt)
{
printf("%c",*(arr+jCnt));
}
y=y-1;
putchar('\n');
}
}
return 0;
}
void swap(unsigned char *Px,unsigned char *Py)
{
int temp = *Px;
*Px = *Py;
*Py	= temp;
}
