
#include <stdio.h>

int main() {
    int number = 5;


    printf("%s\n", number ==11 ? "11�Դϴ�." : "11�� �ƴմϴ�.");

    printf("--------------------------------\n");

    int num, abs;

    printf("������ �Է��ϼ��� :");
    scanf("%d", &num);

    abs = num > 0 ? num : -num;

    printf("num�� ���� %d\n", abs);


    printf("--------------------------------\n");

    int n1;
    int n2;
    int n3;
    int max;

    printf("���� 3���� �Է��ϼ��� :");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1> n3) {
        max = n1;
    } else if(n2 > n3) {
        max = n2;
    } else {
        max = n3;
    }

    printf("3 �� �� �� ū ���� %d �Դϴ�.\n", max);


    max = (n1 > n2 && n1> n3) ? n1 : (n2 > n3) ? n2 : n3;

    printf("3 �� �� �� ū ���� %d �Դϴ�.\n", max);



    return 0;
}

