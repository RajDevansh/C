#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c=5;
    if(a>b){
        if(b>c){
            printf("A is greater than B and B is greater than C");
        }else{
            printf("A is greater than B and C is greater than B");}
    }else{
        if(a>c){
            printf("B is greater than A and A is greater than C");}
        }else{
            printf("B is greater than A and C is greater than A");
        }
    return 0;
}