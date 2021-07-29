#include <stdio.h>

int main()
{
    int *number;
    printf("포인터변수 number의 사이즈 (byte): %u\n", sizeof(number)); //8

    char *ch;
    printf("포인터변수 ch의 사이즈 (byte): %u\n", sizeof(ch)); //8

    float *f1;
    printf("포인터변수 f1의 사이즈 (byte): %u\n", sizeof(f1)); //8

    double *d1;
    printf("포인터변수 d1의 사이즈 (byte): %u\n", sizeof(d1)); //8


    return 0;
}
