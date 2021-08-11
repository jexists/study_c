
#include <stdio.h>
#include <string.h> //memset()
#include <stdlib.h> //malloc(), free()

struct Point {
    int x;
    int y;
};

struct Point2 {
    int x;
    int y;
};

int main() {

    struct Point p1;

    //memset() <= ����ü�� setting �ϴ� ���

    memset(&p1, 0, sizeof(struct Point));


    printf("p1.x: %d, p1.y: %d\n", p1.x, p1.y);


    printf("---------------------------------------------\n");

    struct Point2 *p2 = malloc(sizeof(struct Point2));

    memset(p2, 0, sizeof(struct Point2));

    //�����ͷ� �����Ҷ��� ȭ��ǥ ������
    printf("p2 -> x: %d, p2 -> y: %d\n", p2 -> x, p2 -> y);
    free(p2);


    return 0;
}
