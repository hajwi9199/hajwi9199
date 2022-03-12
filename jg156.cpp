#include <iostream>
#include <stack>
using namespace std;
 
int main() {
int N;
    
scanf("%d", &N);
 
int count = 0;
for(int j=0; j<N;j++){
stack<char> S;
char word[10000];
scanf("%s", word);
 
for (int i = 0; i < strlen(word); i++) {
if (S.empty()) {
S.push(word[i]);
}
else {
if (S.top() == word[i]) {
S.pop();
}
else {
S.push(word[i]);
}
}
}
 
if (S.empty()) {
count++;
}
}
 
printf("%d", count);
}
