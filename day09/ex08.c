
#include <stdio.h>

int main() {

    int number = 10;

    printf("number: ������ ����(�Ҵ�) �� �� ����ϱ� \n");
    printf("number: %d \n", number);
    printf("number: ������ �ּ� ����ϱ� \n");
    printf("number: %p \n\n\n\n", &number);

    printf("c���� �޸� �ּҴ� ������ (pointer) ������ ������\n");
    printf("������ ������ *�� ����ؼ� ������\n");
    printf("������ ������ ���Ӹ��� �����Ͷ�� �Ѵ�.\n");
    printf("\n �ڷ���(data type) *������(����) �̸�;\n");
    printf("������(����) = &(�Ϲ�)����\n\n");

    int *numberPointer; //������ ���� ����
    int num = 11; //(�Ϲ�) ���� ����
    //num��� �̸�ǥ(����)�� ���� �޸� ������ �ּҸ� �Ҵ���

    numberPointer = &num;

    printf("num: %d\n", num);
    printf("num(�ּ�): %p\n", numberPointer);
    printf("num(�ּ�): %p\n", &num);

    return 0;
}
