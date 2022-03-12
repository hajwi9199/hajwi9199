#include <stdio.h>

int main(void)
{
double rad;
double area;
printf("원의 반지름 입력: ");
scanf("%lf",&rad);//3
         // 3   3  27.1415
area = rad*rad *3;
printf("원이 넓이: %f \n", area);
return 0;
}