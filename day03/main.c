#include <stdio.h>
# define SIZE 20

int main() {
    double left, right, average;
    char name[SIZE], line[] = "--------------------------------";


    label:
        printf("�̸��� �Է��ϼ��� : \n");

        fflush(stdin);
        gets(name);
        printf("����, ������ �÷��� �Է��ϼ��� : \n");
        scanf("%lf %lf", &left, &right);

        average = (left + right) / 2;

        printf("%s\n", line);
        printf("�̸� : %s\n", name);

        printf("��� �÷�: %.2f\n\n", average);

    goto label;

    return 0;
}
