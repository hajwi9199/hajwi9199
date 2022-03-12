#include <stdio.h>
#include <string.h>

void TestIssAnagram(const char* s1, const char* s2);
int main()
{
TestIssAnagram("silent", "listen");
TestIssAnagram("garden", "ranged");
TestIssAnagram("split", "lisp");
TestIssAnagram("ssss", "lisp");}
int IsAnagram(const char* s1, const char* s2);
void TestIssAnagram(const char* s1, const char* s2){
printf("=== Test %s %s ===\n", s1, s2);
if(IsAnagram(s1, s2)){
printf("Result: Anagram\n");
}
else{
printf("Result: Is Not Anagram\n");
}

}
int IsAnagram(const char* s1, const char* s2){
int i, j;
int check;
if(strlen(s1) != strlen(s2)){
return 0;
}
char buf[256] = "";
strcpy_s(buf, sizeof(buf), s1);
for(i=0; s2[i]; i++){
check=0;
for(j=0; buf[j]; j++){
if(s2[i] == buf[j]){
strcpy_s(buf+j, sizeof(buf) - j, buf+j +1);
check=1;
break;
}
}
if(check==0){
return 0;
}
}
return 1;
}