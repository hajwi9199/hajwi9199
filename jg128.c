#include <stdio.h>
int main() {
	int a;
	int b;
	int c[10];
	int i=0,j;
	int count;
	int num1,num2;
	for(a=1000;a<10000;a++){
		count=0;
		b=0;
		i=0;
		num1=a;
		num2=a;
		while(num2!=0){
			c[i]=num2%10;
			num2/=10;
			i++;
		}
		for(i=0; i<4;i++){
			for(j=0; j<4; j++){
				if(c[j]==c[i]){
					count++;
				}
			}
		}
		
		for(i=0; i<4; i++){
			b = b + num1%(num1%10);
			num1/=10;
		}
		
		if(count==0&&b==0){
			printf("%d\n",a);
		}
		
	}
	
	
	
	return 0;
}