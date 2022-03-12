#include <stdio.h>

int main(){
int x,y,w,h;
int num1, num2;//x축
int num3, num4;//y축
scanf("%d %d %d %d", &x, &y, &w, &h);

if(x<w){
	num1= w-x;
	if(x<num1){
		num2=x;
	}else{
		num2=num1;
	}
}else if(x>w){
	num1=x-w;
	if(x<num1){
		num2=w;
	}else{
		num2=num1;
	}
}
if(y<h){
	num3= h-y;
	if(y<num3){
		num4=y;
	}else{
		num4=num3;
	}
}else if(y>h){
	num1=y-h;
	if(y<num3){
		num4=h;
	}else{
		num4=num3;
	}
}
if(num2<num4){
printf("%d", num2);
}else{
printf("%d", num4);
}

}