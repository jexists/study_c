


#include <stdio.h>
#include <string.h> //memset()
#include <stdlib.h> //malloc(), free()

struct Point {
    int x;
    int y;
};


int main() {

    struct Point p1;
    struct Point p2;

    p1.x = 10;
    p1.y = 20;

    printf("p1.x: %d, p1.y: %d\n", p1.x, p1.y);

    //구조체 복사
    memcpy(&p2, &p1, sizeof(struct Point));

    printf("p2.x: %d, p2.y: %d\n", p2.x, p2.y);


    printf("===================\n");

    struct Point *p3 = malloc(sizeof(struct Point));
    struct Point *p4 = malloc(sizeof(struct Point));

    p3 -> x = 33;
    p3 -> y = 55;


    printf("p3 -> x: %d, p3 -> y: %d\n", p3 -> x, p3 -> y);

    memcpy(p4, p3, sizeof(struct Point));


    printf("p4 -> x: %d, p4 -> y: %d\n", p4 -> x, p4 -> y);

    free(p3);
    free(p4);


    return 0;
}
