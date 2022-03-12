#include<stdio.h>

int main() {
int num[100], n, temp;
scanf("%d", &n);
int k=0;
while(n!=0){
num[k]=n%10;
n/=10;
k++;
}

for(int i=0; i<k-1; i++)
for(int j=0; j<k-1-i; j++)
if(num[j] < num[j+1]) {
temp = num[j];
num[j] = num[j+1];
num[j+1] = temp;
}

for(int i=0; i<k; i++) 
printf("%d", num[i]);
}