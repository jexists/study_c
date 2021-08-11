


#include <stdio.h>
#include <string.h> //strcpy()
#include <stdlib.h> //malloc(), free()

union Box {
    short candy; //2byte
    float snack; //4byte
    char doll[8]; //8byte
};


int main() {


    //공용체 변수 선언
    union Box box1;


    printf("공용체 box1의 크기: %d\n", sizeof(box1)); //8

    strcpy(box1.doll, "유승호");

    printf("doll: %s\n", box1.doll);

    box1.candy = 1;
    printf("candy: %d\n", box1.candy);
    box1.snack = 2.35421F;
    printf("snack: %.2f\n", box1.snack);

    //공용체는 한꺼번에 사용 불가능 (잘 사용안함)
    printf("candy: %d\n", box1.candy);
    printf("snack: %.2f\n", box1.snack);
    printf("doll: %s\n", box1.doll);
    printf("----------------------------\n");

    return 0;
}


