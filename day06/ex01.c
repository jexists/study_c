#include <stdio.h>

int main() {
    int number;

    printf("������ �Է��ϼ��� ");
    scanf("%d", &number);

    switch(number) {
        case 1: {
            //case �� �ȿ��� ������ �����ϴ� ��쿡�� �߰�ȣ�� �����־����
            int num = number;
            printf("%d�� �Է��ϼ̽��ϴ�. \n", number);
            break;
            }
        case 2:
            printf("2�� �Է��ϼ̽��ϴ�. \n");
            break;
        case 3:
            printf("3�� �Է��ϼ̽��ϴ�. \n");
            break;

        default:
            printf("1, 2, 3 ���Է����ּ��� \n");
    }

    printf("���α׷� ����");
    return 0;
}

