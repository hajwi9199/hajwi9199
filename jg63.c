﻿#include<stdio.h>
 
 
int main(){
    
    int num;
    int buf[1000] = {};
 
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
  
    int index = 0;
    for(int k = 0; k < num; k++){

        for(int j = 0; j <num; j++){
            
            printf("%d ",buf[(j+k)%num]);
            
        }
        printf("\n");
    }
    return 0;
}
