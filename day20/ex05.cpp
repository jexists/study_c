
#include <iostream>
using namespace std;


class Circle{
    int radius;
    static double PI; // 메모리 읽기용일때만

    public:
        void setRadius(int _radius) {
            radius = _radius;
        }

        int getRadius() {
            return radius;
        }

        double getArea() {
            return radius * radius * PI;
        }

        double getAround() {
            return 2 * radius * PI;
        }
};

// global scope 전역 스코프
double Circle::PI = 3.1415928;




int main() {

    Circle circle1;

    circle1.setRadius(5);
    cout << "반지름1 : " << circle1.getRadius() << endl;
    cout << "원넓이1 : " << circle1.getArea() << endl;
    cout << "원둘래1 : " << circle1.getAround() << endl;
    cout << "circle 주소지 메모리 크기  : " << sizeof(circle1) << endl;


    cout << "------------------------------!" << endl;


    Circle circle2;

    circle2.setRadius(7);
    cout << "반지름2 : " << circle2.getRadius() << endl;
    cout << "원넓이2 : " << circle2.getArea() << endl;
    cout << "원둘래2 : " << circle2.getAround() << endl;
    cout << "circle2 주소지 메모리 크기  : " << sizeof(circle2) << endl;


    cout << "------------------------------!" << endl;

    return 0;
}
