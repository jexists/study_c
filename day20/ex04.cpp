
#include <iostream>
using namespace std;

const double PI = 3.1415928;

class Circle{
    //private:�� �����ص� public�� ������ �������� private ���� ������
    int radius;
    int height; // ���� �ϰ� ����� ���ص� size�� �þ��.


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
    cout << "������ : " << circle.getRadius() << endl;
    cout << "������ : " << circle.getArea() << endl;
    cout << "���ѷ� : " << circle.getAround() << endl;
    cout << "circle �ּ��� �޸� ũ��  : " << sizeof(circle) << endl;


    cout << "------------------------------!" << endl;


    Circle circle2;

    circle2.setRadius(4);
    cout << "������2 : " << circle2.getRadius() << endl;
    cout << "������2 : " << circle2.getArea() << endl;
    cout << "���ѷ�2 : " << circle2.getAround() << endl;
    cout << "circle2 �ּ��� �޸� ũ��  : " << sizeof(circle2) << endl;


    cout << "------------------------------!" << endl;

    return 0;
}
