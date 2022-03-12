#include <stdio.h>
#include <string.h>
#include <stack>

using namespace std;

int main(){
int num1;
stack<char> S;
char str[50];
int count;
int i,j;

scanf("%d", &num1);

for(i=0; i<num1; i++){
count=0;
scanf("%s", str);

for(j=0; j<strlen(str); j++)
{
if(str[j]=='('){
S.push('(');
}else if(str[j]==')')
{
if(S.empty()==0){
S.pop();
}else{
count++;
}
}

}//for(j)

if(S.empty()==0||count!=0){
printf("NO\n");
while(S.empty()!=1){
S.pop();
}
}else{
printf("YES\n");
}

}//for(i)

}