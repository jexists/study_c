
#include <stdio.h>

int main() {

    //�ݺ� Ƚ���� �����ϴ� ����
    int count;

    printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++ ) {
        printf("%d ", i);
    }

    printf("\n====================\n");


    for (int i = count; i >= 1; i-- ) {
        printf("%d ", i);
    }

    return 0;
}

