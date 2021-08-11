


#include <stdio.h>
#include <string.h> //strcpy()
#include <stdlib.h> //malloc(), free()

union Box {
    short candy; //2byte
    float snack; //4byte
    char doll[8]; //8byte
};


int main() {


    //����ü ���� ����
    union Box box1;


    printf("����ü box1�� ũ��: %d\n", sizeof(box1)); //8

    strcpy(box1.doll, "����ȣ");

    printf("doll: %s\n", box1.doll);

    box1.candy = 1;
    printf("candy: %d\n", box1.candy);
    box1.snack = 2.35421F;
    printf("snack: %.2f\n", box1.snack);

    //����ü�� �Ѳ����� ��� �Ұ��� (�� ������)
    printf("candy: %d\n", box1.candy);
    printf("snack: %.2f\n", box1.snack);
    printf("doll: %s\n", box1.doll);
    printf("----------------------------\n");

    return 0;
}


