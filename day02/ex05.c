#include <stdio.h>

int main() {
    float f1, f2;
    double d1, d2;
    // ���� �ڿ� f�� ǥ������ ������ double type���� �ν�
    f1 = 45.3f;
    printf("f1: %f\n", f1);

    d1 = 45.3;
    printf("d1: %f\n", d1);

	//����ȯ casting: type ��ȯ
    int n1 = f1; // �ڵ� ����ȯ
    printf("n1: %d\n", n1);



    printf("3.14�� ũ�� (byte): %d\n", sizeof(3.14)); //8
    printf("3.14F�� ũ�� (byte): %d\n", sizeof(3.14F)); //4


    printf("double: %d byte\n", sizeof(double)); //8
    printf("float: %d byte\n", sizeof(float)); //4

    //f2 �������� 3.141592F�� �����
    f2 = 3.141592;
    printf("f2: %f\n", f2);

    int n3 = 6.25;
    printf("n3: %d\n", n3);

    //int type�� ����
    // -2**31 ~ 2**31-1 �������� ǥ����
    // -2147483648 ~ 2147483647

    int n4  = 2147483648;
    printf("n4: %d\n", n4);


    int n5  = 2147483647;
    printf("n5: %d\n", n5);


    long long n6  = 2147483648;
    printf("n6: %llu\n", n6);



    return 0;
}
