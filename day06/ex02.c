
#include <stdio.h>

int main() {

    // switch �������� ���� �ڷ����� ����� �� ����
    //                 �Ǽ� �ڷ���(float, double)�� ��� �� �� ����
    // char type�� ������ �ڷ������� �ν���

    char c1;

    printf("���ĺ��� �Է��ϼ��� ");
    scanf("%c", &c1);

    switch(c1) {
        case 'a':
            printf("a�Դϴ�.\n");
            break;
        case 'b':
            printf("b�Դϴ�.\n");
            break;
        case 'c':
            printf("c�Դϴ�.\n");
            break;

        default:
            printf("�Է��� ���ڴ� a, b, c �߿� �����ϴ�. %c\n", c1);
    }

    printf("���α׷� ����");
    return 0;
}
