
#include <stdio.h>

int main() {
    int n1, n2;
    char op;
    int result;


    printf("���� 2���� ��ȣ(+, -, x, /, %)�� �Է��ϼ��� :");
    scanf("%d %d %c", &n1, &n2, &op);


    result = (op == '+') ? (n1 + n2) : (op == '-') ? (n1 - n2) : (op == 'x') ? (n1 * n2) : (op == '/') ? (n1 / n2) : (op == '%') ? (n1 % n2) : printf("��ȣ�� Ȯ�����ּ���.\n");


    printf("��� %d\n", result);

    printf("--------------------------------\n");



    return 0;
}


