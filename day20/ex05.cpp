
#include <iostream>
using namespace std;


class Circle{
    int radius;
    static double PI; // �޸� �б���϶���

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

// global scope ���� ������
double Circle::PI = 3.1415928;




int main() {

    Circle circle1;

    circle1.setRadius(5);
    cout << "������1 : " << circle1.getRadius() << endl;
    cout << "������1 : " << circle1.getArea() << endl;
    cout << "���ѷ�1 : " << circle1.getAround() << endl;
    cout << "circle �ּ��� �޸� ũ��  : " << sizeof(circle1) << endl;


    cout << "------------------------------!" << endl;


    Circle circle2;

    circle2.setRadius(7);
    cout << "������2 : " << circle2.getRadius() << endl;
    cout << "������2 : " << circle2.getArea() << endl;
    cout << "���ѷ�2 : " << circle2.getAround() << endl;
    cout << "circle2 �ּ��� �޸� ũ��  : " << sizeof(circle2) << endl;


    cout << "------------------------------!" << endl;

    return 0;
}
