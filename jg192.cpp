#include<stdio.h>
#include<string.h>

int main(void){
int N;
char str[1000];
char strFry[1000];
int count[26]={0,};
int count2[26]={0,};

scanf("%d", &N);
while(N--!=0){
scanf("%s %s", str, strFry);

if(strlen(str)!=strlen(strFry)){
printf("Impossible\n");
continue;
}

for(int i=0; i<strlen(str); i++){
count[str[i]-'a']++;
count2[strFry[i]-'a']++;
}
int check=0;;
for(int j=0; j<26; j++){
if(count[j]!=count2[j]){
check=1;
}
}

if(check==1){
printf("Impossible\n");
}else{
printf("Possible\n");
}
for(int j=0; j<26; j++){
count[j]=0;
count2[j]=0;
}

}
}