
#include <stdio.h>

int main() {
    int number;

    printf("������ �Է��ϼ��� :");
    scanf("%d", &number);

    //number�� ¦������ �˾ƺ���
    //¦�� = 2�� ���

    int result = (number % 2 == 0) ? 2 : -1;


    printf("result: %d\n", result);


    (number % 2 == 0) ?  printf("¦��\n") : printf("Ȧ��\n");

    // ���׿����� => if��
    if(number %2 == 0) {
         printf("¦��\n");
    } else {
         printf("Ȧ��\n");
    }

    return 0;
}
