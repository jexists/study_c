
#include <stdio.h>
#include <math.h> //sqrt

struct Point {
    int x;
    int y;
};

int main() {

    struct Point p1;
    struct Point p2;

    int n1, n2;

    double distancePoint;

    //(30,20)
    p1.x = 30;
    p1.y = 20;

    //(70,60)
    p2.x = 70;
    p2.y = 60;

    printf("p1: %d, %d \n", p1.x, p1.y);
    printf("p2: %d, %d \n", p2.x, p2.y);

    printf("두점 사이의 거리 구하기 \n");

    //distancePoint = sqrt((p1.x-p2.x) * (p1.x - p2.x) + (p1.y -p2.y) *(p1.y-p2.y));

    n1 = p1.x-p2.x;
    n2 = p1.y-p2.y;

    distancePoint = sqrt((n1 * n1) + (n2*n2));

    printf("distancePoint: %.4f\n", distancePoint);
    return 0;
}
