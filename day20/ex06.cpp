
#include <iostream>
#include <iomanip> //setw()

//setw(n): n��ŭ �޸� ������ Ȯ���Ͽ� �� �ں��� ���� ����ŭ �����
//set weight (tabŰó�� ���� ����)

using namespace std;


class Point{
    int x;
    int y;

    public:
        void display(){
            cout << "x : " << setw(2) << x << "\t y: " << setw(2) << y << endl;
        };
        void setXY(int _x, int _y) {
            x = _x;
            y = _y;
        };
};


int main() {

    Point p[5];
    //int number[5];

    p[0].setXY(5, 10);
    p[0].display();

    p[1].setXY(2, 3);
    p[1].display();

    cout << "------------------------------!" << endl;

    for(int i=0; i < 5; i++) {
        p[i].setXY(i * 2, i * 5);
        p[i].display();
    }


    cout << "------------------------------!" << endl;

    return 0;
}
