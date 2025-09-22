#include<stdio.h>
int main(){
    int a=5;
    int b=6;
    if(a==b){
        printf("Equal");
    }else if(a!=b){
        printf("Not equal");
    }
    if(a>b){
        printf("Greater");
    }else if(a<b){
        printf("Smaller");
    }
    if(a>=b){
        printf("Greater or equal");
    }else if(a<=b){
        printf("Less than or equal");
    }
    return 0;
}