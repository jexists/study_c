

#include <stdio.h>

int main() {

    int number;
    int sum = 0;

    printf("���ڸ� �Է����ּ��� \n");
    scanf("%d", &number);


    while (number > 0) {
        sum = sum + (number % 10);
        number = number / 10;
    }

    printf("-----------------------------\n");

    printf("sum :%d \n", sum);

    return 0;
}

