#include <stdio.h>

int main()
{
    int *number;
    printf("�����ͺ��� number�� ������ (byte): %u\n", sizeof(number)); //8

    char *ch;
    printf("�����ͺ��� ch�� ������ (byte): %u\n", sizeof(ch)); //8

    float *f1;
    printf("�����ͺ��� f1�� ������ (byte): %u\n", sizeof(f1)); //8

    double *d1;
    printf("�����ͺ��� d1�� ������ (byte): %u\n", sizeof(d1)); //8


    return 0;
}
