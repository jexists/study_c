



#include <stdio.h>

// �Լ� ������ �迭

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}

int main() {


    int functionNumber;

    int number1, number2;

    //�Լ�������

    int(*pointer)(int, int) = NULL;

    printf("�Լ� ��ȣ�� ����� ���� �Է��ϼ��� :");

    scanf("%d %d %d", &functionNumber, &number1, &number2);

    switch(functionNumber) {
        case 0:
            pointer = add;
            break;
        case 1:
            pointer = sub;
            break;
        case 2:
            pointer = mul;
            break;
        case 3:
            pointer = div;
            break;
        default:
            printf("0,1,2,3 �߿����� �Է��ϼ���. \n");

    }

    printf("result: %d\n", pointer(number1, number2));




    printf("------------\n");


    return 0;
}
