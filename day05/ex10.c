
#include <stdio.h>

int main() {

/*
switch(����/����) {
	case ��1:
		���๮/���๮...;
		break;
	case ��3:
		���๮/���๮...;
		break;
	case ��3:
		���๮/���๮...;
		break;
	default:
		���๮/���๮...;
}
*/

    int num1;

    printf("������ �Է��ϼ���: ");
    scanf("%d", &num1);

    switch(num1) {
        case 1:
            printf("�Է��Ͻ� ���ڴ� 1�Դϴ�. \n");
            break;
        case 2:
            printf("�Է��Ͻ� ���ڴ� 2�Դϴ�. \n");
            if (1) { //true
                break;
            }
        case 3:
            printf("�Է��Ͻ� ���ڴ� 3�Դϴ�. \n");
            break;
        default:
            printf("�Է��Ͻ� ���ڴ� 1,2,3 �߿� �����ϴ�. \n");
    }

    printf("���α׷� ����");
    /*
    if (num1 == 1) {
        printf("�Է��Ͻ� ���ڴ� 1�Դϴ�. \n");
    } else if (num1 == 2) {
        printf("�Է��Ͻ� ���ڴ� 2�Դϴ�. \n");
    } else if (num1 == 3) {
        printf("�Է��Ͻ� ���ڴ� 3�Դϴ�. \n");
    } else {
        printf("�Է��Ͻ� ���ڴ� 1,2,3 �߿� �����ϴ�. \n");
    }
    */
    return 0;
}
