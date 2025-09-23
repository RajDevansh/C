#include <stdio.h>

int main() {

    int a = 12, b = 25;
    printf("Output = %d", a & b);
    int a = 12, b = 25;
    printf("Output = %d", a | b);
    int a = 12, b = 25;
    printf("Output = %d", a ^ b);
    printf("Output = %d\n", ~35);
    printf("Output = %d\n", ~-12);
    int num=212, i;
    for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");
    for (i = 0; i <= 2; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);    
    }
    return 0;
}