


#include <stdio.h>
#include <string.h> //memset()
#include <stdlib.h> //malloc(), free()

struct Point {
    int x;
    int y;
};


int main() {


    int number[10];
    //int number[10] = {0,};

    int number1[10] = {1,2,3,4,5,6,7,8,9};

    int number2[10];
    number2[0]=1;
    number2[1]=2;

    int value = 10;
    for (int i = 0; i< 10; i++) {
        number[i]= ++value;
        printf("%d\n", number[i]);
    }



    printf("----------------------------\n");

    //����ü Ÿ���� �迭 �����ϱ�

    struct Point p1[3]; //0,1,2

    p1[0].x =11;
    p1[0].y =12;
    p1[1].x =13;
    p1[1].y =14;
    p1[2].x =15;
    p1[2].y =16;

    for(int i=0; i < 3; i++) {
        printf("p1[%d].x: %d, p1[%d]: %d\n", i,p1[i].x, i,  p1[i].y);
    }


    printf("----------------------------\n");


    int value2 = 20;

    for(int i = 0;  i<3; i++) {
        p1[i].x = ++value2;
        p1[i].y = ++value2;
    }


    for(int i=0; i < 3; i++) {
        printf("p1[%d].x: %d, p1[%d]: %d\n", i,p1[i].x, i,  p1[i].y);
    }


    printf("----------------------------\n");

    //����ü �迭�� �����ϸ鼭 ���ÿ� �ʱ�ȭ �ϱ�

    struct Point p2[3] = {{.x=31,.y=32},{.x=33,.y=34},{.x=35,.y=36}};
    for(int i=0; i < 3; i++) {
        printf("p2[%d].x: %d, p2[%d]: %d\n", i,p2[i].x, i,  p2[i].y);
    }

    printf("----------------------------\n");

    //����ü �迭�� �����ϸ鼭 ���ÿ� �ʱ�ȭ �ϱ�

    struct Point p3[3] = {{51,52},{53,54},{55,56}};
    for(int i=0; i < 3; i++) {
        printf("p3[%d].x: %d, p3[%d]: %d\n", i,p3[i].x, i,  p3[i].y);
    }


    printf("----------------------------\n");


    //����ü �迭�� ��� ������� ���� 0���� �ʱ�ȭ �ϴ� ���

    struct Point p4[3] = {0,};
    for(int i=0; i < 3; i++) {
        printf("p4[%d].x: %d, p4[%d]: %d\n", i,p4[i].x, i,  p4[i].y);
    }
    return 0;
}

