
#include <stdio.h>

int main() {

    int *numP1; //����������
    int **numP2; //����������
    int ***numP3;
    int ****numP4;
    int *****numP5;
    int ******numP6;
    int num = 11;

    numP1 = &num;
    numP2 = &numP1;
    numP3 = &numP2;
    numP4 = &numP3;
    numP5 = &numP4;
    numP6 = &numP5;

    printf("num: %d\n", num);
    printf("numP1: %u\n", numP1);
    printf("numP2: %u\n", numP2);

    printf("--------------------\n");

    printf("num: %d\n", num);
    printf("numP1: %u\n", &num);
    printf("numP2: %u\n", &numP1);

    printf("--------------------\n");
    printf("num: %d\n", num);
    printf("numP1: %d\n", *numP1);
    printf("numP2: %d\n", *numP2);
    //*numP1 == numP1

    printf("--------------------\n");
    printf("**numP2: %d\n", **numP2);

    // �̷��� ����� ���� ������, �Ϲ������� ���� �����ͱ����� ���


    printf("***numP3: %d\n", ***numP3);
    printf("****numP4: %d\n", ****numP4);
    printf("*****numP5: %d\n", *****numP5);
    printf("******numP6: %d\n", ******numP6);

    return 0;
}
