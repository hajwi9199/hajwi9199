#include <stdio.h>

int main()
{
unsigned char num1[17]={0x48, 0x89, 0x4C, 0x24, 0x08, 0x48, 0x83, 0xEC, 0x18, 0xC7, 0x04, 0x24, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x08};
int num2
int i;

for(i=0; i<24; i++)
{
num1[i] = i ^ *(num1[i] - 2)*;
}

}
