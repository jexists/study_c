
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = -1;
    int num2;

    //���ǽ�, true, false (��)
    //������ �ڷ�(��) 0 => false
    //������ �ڷ�(��) 0�ƴҰ�� (+,-) => true
    if(num1) {  //true
        num2 = 222;
    } else {
        num2 = 333;
    }

    printf("num2: %d\n", num2);

    // ���׿�����
    // ���ǽ� ? ���ǽ��� ���� ��� : ���ǽ��� ������ ���;

    num1 ? 222 : 333;

    printf("num2: %d\n", num2);

    num2 = (num1 == 10) ? 222 : 333;

    printf("num2: %d\n", num2);

    return 0;
}
