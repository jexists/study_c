
#include <stdio.h>

int main() {
    int month;
    int date;

    printf("��������� �Է��ϼ��� (1~12) ");
    scanf("%d", &month);

    switch(month) {
        case 1:  case 3:  case 5:  case 7:
        case 8:  case 10:  case 12:
            date = 31;
            break;
        case 4:  case 6:  case 9:  case 11:
            date = 30;
            break;
        case 2:
            date = 28;
            break;
        default:
            printf("��������� ��Ȯ�ϰ� �Է����ּ���. \n");
    }

    printf("%d ���� %d�ϱ��� �ֽ��ϴ�.\n",month, date);
    printf("���α׷� ����");
    return 0;
}
