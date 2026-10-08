#include <stdio.h>

int main() {
    char c = 'A';
    short s = -10;
    unsigned short us = 10;
    int i = -100;
    unsigned int ui = 100;
    long int l = -1000;
    unsigned long int ul = 1000;
    long long int ll = -10000;
    unsigned long long int ull = 10000;
    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.141592L;

    printf("char : %c\n", c);
    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n", us);
    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);
    printf("long int : %ld\n", l);
    printf("unsigned long int : %lu\n", ul);
    printf("long long int : %lld\n", ll);
    printf("unsigned long long int : %llu\n", ull);
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}