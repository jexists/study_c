#include <stdio.h>

int main() {
    int year;
    int month;
    int date;

    printf("�⵵�� ���� �Է��ϼ��� ");
    scanf("%d %d", &year, &month);

    switch(month) {
        case 1:  case 3:  case 5:  case 7:
        case 8:  case 10:  case 12:
            date = 31;
            break;
        case 4:  case 6:  case 9:  case 11:
            date = 30;
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                date= 29;
            } else {
                date = 28;
            }
            break;
        default:
            printf("��������� ��Ȯ�ϰ� �Է����ּ���. \n");
    }

    printf("%d�⵵ %d�� %d�ϱ��� �ֽ��ϴ�.\n",year ,month, date);
    printf("���α׷� ����");
    return 0;
}
