
#include <stdio.h>

int main() {

    printf("���� \n");

    // ������ ���� ����
    int num1, num2;

    // ������ �ʱ�ȭ: ó������ ���� �Ҵ��ϴ� ��
    num1 = 10;
    num2 = 8;

    //format specifier : ���� ������
    //%d: decimal (����)
    //%f: floating point (�Ҽ��� �ִ� ����: �Ǽ�/�ε��Ҽ���)
    //double:
    // ������� ���� �޴´�.
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d x %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1/num2);
    printf("%d / %d = %f\n", num1, num2, num1/(double)num2);
    printf("%d / %.2f = %f\n", num1, (double)num2, num1/(double)num2);
    printf("%d %% %d = %d\n", num1, num2, num1%num2);

    return 0;
}
