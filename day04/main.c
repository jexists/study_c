#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 5;
    int n2 = 2;

    if (0 < n1 && n1 < 10) { //true true -> true
        printf("0 < n1 <10\n");
    }

    if (n1 < 0 || n2 == 2) { //false true -> true
        printf("n1�� 0���� �۰ų�, n2�� 2�Դϴ�.\n");
    }

    if (!(n1 > n2)) { //false
        printf("n1�� n2���� ũ�� �ʽ��ϴ�.\n n1�� n2���� �۰ų� �����ϴ�.\n");
    }


    return 0;
}
