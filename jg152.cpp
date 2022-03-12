#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = n;
    for(int i=0; i<n; i++){
        char lastchar = '0';
        char word[101] = {0,};
        int state = 0;
        scanf("%s", word);
        for(int j=0; j<word[j]!='\0'; j++){
            if(state == 1){
                state = 0;
                break;
            }
            if(word[j] != lastchar){
                lastchar = word[j];
                for(int k=0; k<j; k++){
                    if(word[k] == word[j]){
                        count -= 1;
                        state = 1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d", count);
}