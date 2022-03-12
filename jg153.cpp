#include <stdio.h>
#include <stack>

using namespace std;


int main(){
int N;
int num1;
stack<int> st;
char str[10];

scanf("%d", &N);

for(int i=0; i<N; i++)
{
scanf("%s", str);
if(str=="push")
{
scanf("%d", &num1);
st.push(num1);
}else if(str=="pop")
{
if(st.empty()==0)
{
printf("%d\n", st.top());
st.pop();
}else
{
printf("-1\n");
}
}else if(str=="size")
{
printf("%d\n", st.size());
}else if(str=="empty")
{
printf("%d\n", st.empty());
}else if(str=="top")
{
printf("%d\n", st.top());
}
}

}