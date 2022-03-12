#include <stdio.h>

void sales_avg(int *pa);
void sort(char **sto_p, int **sal_p);
void print_record(char **sto_p, int **sal_p);
void print_store(char *store[4], int *sales[7]);

int main(void)
{

char *store[4]={"관악점", "강남점", "명동점", "대림점"};
int sales[4][7]={{70, 45,100, 92, 150, 81},{88, 92, 77, 30, 52, 55}, {50, 90, 88,75, 77, 49}, {120, 92, 80, 150, 130, 105}};

int i, j;
int total;
char *sto_p[4];
int *sal_p[4];

char *temp1;
int *temp2;

for(i=0; i<4; i++){
total = 0;
for(j=0; j<6; j++){
total+=sales[i][j];
}
sales[i][6]=(int)(total/6.0 + 0.5);
}

for(i=0; i<4; i++)
{
sto_p[i] = store[i];
sal_p[i] = sales[i];
}

for(i=0; i<3; i++)
{
for(j=i+1; j<4; j++)
{
if(sal_p[i][6] < sal_p[j][6])
{
temp1=sto_p[i];
sto_p[i]=sto_p[j];
sto_p[j]=temp1;

temp2=sal_p[i];
sal_p[i]=sal_p[j];
sal_p[j]=temp2;
}
}
}

printf("실적별 출력... \n\n");

for(i=0; i<4; i++){
printf("%s", sto_p[i]);
for(j=0;j<7;j++){
printf(%5d", sal_p[i][j]);
}
printf("\n");
}
printf("\n");

printf(" 지점별 출력... \n\n");

for(i=0; i<4; i++)
{
printf("%s", store[i]);
for(j=0; j<7; j++){
printf("%5d", sales[i][j]);
}
printf("\n");
}
return 0;
}