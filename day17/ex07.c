
#include <stdio.h>

int operate(int n1, int n2, int n3) {

    int r1 = n1 + n2 + n3;
    int r2 = n1 + n2 - n3;
    int r3 = n1 * n2 - n3;

    //return r1, r2, r3;
}

//�Ű� ������ �����͸� ����ϱ�

int swapNumber(int first, int second) {
    int cup;
    //int first = first;
    //int second = second;


    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);


    cup = first;
    first = second;
    second = cup;



    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);



    return first;
    //printf("first: %d\n", first);
    //printf("second: %d\n", second);

}

int swapNumber2(int *first, int *second) {
    int cup;

    cup = *first;
    *first = *second;
    *second = cup;

    return first;

}

int main() {

    operate(1, 2, 3);

    int first = 11;
    int second = 22;


    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    swapNumber(first, second);

    int returnFirst = swapNumber(first, second);


    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    printf("returnFirst: %d\n", returnFirst);




    printf("�ּҷ� �������� ��..----------------------\n");


    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);

    swapNumber2(&first, &second);


    printf("swapNumber() ���� ���� ��\n");

    printf("first: %d\n", first);
    printf("second: %d\n", second);
}
