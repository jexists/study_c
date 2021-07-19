#include <stdio.h>
# define SIZE 20

int main() {
    double left, right, average;
    char name[SIZE], line[] = "--------------------------------";


    label:
        printf("이름을 입력하세요 : \n");

        fflush(stdin);
        gets(name);
        printf("왼쪽, 오른쪽 시력을 입력하세요 : \n");
        scanf("%lf %lf", &left, &right);

        average = (left + right) / 2;

        printf("%s\n", line);
        printf("이름 : %s\n", name);

        printf("평균 시력: %.2f\n\n", average);

    goto label;

    return 0;
}
