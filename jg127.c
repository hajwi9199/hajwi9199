#include  <stdio.h>
int main() {
    int n, num1[10] = { 0, };
    int i;
    int temp;
    scanf("%d", &n);
    while (n != 0) {
        num1[n % 10]++;
        n /= 10;
    }
    temp = (num1[6] + num1[9] + 1) / 2;
    for (i = 0; i < 10; i++) {
        if (i == 6 || i == 9)
            continue;
        if (num1[i] >= temp)
            temp = num1[i];
    }
    if (temp == 0)
        temp = 1;
        printf("%d", temp);
return 0;

}