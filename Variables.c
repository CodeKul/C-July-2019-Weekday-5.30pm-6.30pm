#include<stdio.h>

int main() {

    int a = 10.34;
    int b;
    float c = 20.45;
    char d = 'A';

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %f\n", c);
    printf("Value of d: %c\n", d);

    printf("Ascii value of d: %d\n", d);

    scanf("%c", &d);

    printf("Entered value: %c\nAscii value: %d\n", d, d);

    return 0;
}