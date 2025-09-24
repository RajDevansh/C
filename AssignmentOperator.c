#include <stdio.h>
int main() {
    int a = 10, b = 5;
    // Equivalent to a = a + 3
    a += 3;
	printf("%d\n",a);
    // a = a - b
    a -= b;  
    printf("%d\n", a);
    // a = a * b
    a *= b;  
    printf("%d\n", a);
    // a = a / b
    a /= b; 
    printf("%d\n", a);
    // a = a % b
    a %= b;  
    printf("%d\n", a);
    return 0;
}