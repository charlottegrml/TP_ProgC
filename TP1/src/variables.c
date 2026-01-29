#include <stdio.h>

int main() {

    /* char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    /* short */
    short s = -32000;
    signed short ss = -1000;
    unsigned short us = 60000;

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    /* int */
    int i = -42;
    signed int si = -100;
    unsigned int ui = 100;

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    /* long int */
    long int li = -100000L;
    signed long int sli = -50000L;
    unsigned long int uli = 100000L;

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    /* long long int */
    long long int lli = -1000000000LL;
    signed long long int slli = -2000000000LL;
    unsigned long long int ulli = 3000000000ULL;

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    /* float / double / long double */
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
