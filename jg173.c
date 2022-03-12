#include <stdio.h>

int main()
{
	int num1, num2, count;
	int first, second;
	scanf("%d %d", &num1, &num2);
	first = num1;
	second = num2;

	while(1) {
		if (num1 % num2 != 0) {
			count = num1 % num2;
			num1 = num2;
			num2 = count;
		}

		else {
			break;
		}
	}

	printf("%d\n", num2); //최대공약수
	printf("%d", first * second / num2); //최소공배수

	return 0;
}