
#include <stdio.h>

//return-type *�Լ��̸�() { return ��ȯ��; }

int *addressMemory() {
    int number1 = 123;
    // number1 �� addressMemory()�Լ� �ȿ����� ����� �� �ִ�
    // ���������� - addressMemory()�Լ��� ������ �����ϸ�
    //addressMemory()�Լ��� �����ϱ� ���ؼ� Ȯ���ߴ�
    //�޸� ������ ������ <-- int number1 �� ������
    //number1�� �ּҸ� ��ȯ�ϸ�
    //������ int number1�� �ּҸ� ��ȯ�ϹǷ�
    //���ּҸ� ã�� ����


    return &number1;
}

int main() {

    int *intPointer;

    intPointer = addressMemory();

    printf("intPointer: %p\n", intPointer); //NOTWORKING
    printf("*intPointer: %d\n", *intPointer); //NOTWORKING

    return 0;
}
