#include <iostream>

using namespace std; //cout && endl

int main() {

    int a = 100;

    int *pointer;

    pointer = &a;

    cout << "a�� ����� �� " << a << endl;
    cout << "a�� �ּ� �� " << &a << endl;

    cout << "-------------------------" << endl;

    cout << "pointer�� ����� �� " << *pointer << endl;
    cout << "pointer�� �ּ� �� " << pointer << endl;

    return 0;
}
