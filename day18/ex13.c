


#include <stdio.h>


int add(int n1, int n2) {
    return n1 + n2;
}

void executer(int(*pointer)(int, int)) {
    //�Ű������� �Լ������� �ֱ�

    printf("result: %d \n", pointer(11,22));

}


int main() {


    executer(add);

    printf("------------\n");


    return 0;
}

