

#include <stdio.h>


int add(int n1, int n2) {
    return n1 + n2;
}


//�Լ� �����͸� ��ȯ ������ ����
//�̸� ���� �̸����θ� ȣ�� + ()
int (*getAdd())(int, int) {
    return add;
}


int main() {



    printf("%d\n", getAdd()(11, 22));

    printf("------------\n");


    return 0;
}

