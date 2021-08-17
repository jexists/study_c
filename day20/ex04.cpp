
#include <iostream>
using namespace std;

const double PI = 3.1415928;

class Circle{
    //private:은 생략해도 public이 나오기 전까지는 private 으로 동작함
    int radius;
    int height; // 선언만 하고 사용을 안해도 size가 늘어난다.


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



int main() {

    Circle circle;

    circle.setRadius(5);
    cout << "반지름 : " << circle.getRadius() << endl;
    cout << "원넓이 : " << circle.getArea() << endl;
    cout << "원둘래 : " << circle.getAround() << endl;
    cout << "circle 주소지 메모리 크기  : " << sizeof(circle) << endl;


    cout << "------------------------------!" << endl;


    Circle circle2;

    circle2.setRadius(4);
    cout << "반지름2 : " << circle2.getRadius() << endl;
    cout << "원넓이2 : " << circle2.getArea() << endl;
    cout << "원둘래2 : " << circle2.getAround() << endl;
    cout << "circle2 주소지 메모리 크기  : " << sizeof(circle2) << endl;


    cout << "------------------------------!" << endl;

    return 0;
}
