#include <iostream>

using namespace std; //cout && endl

int main() {

    int a = 100;

    int *pointer;

    pointer = &a;

    cout << "a에 저장된 값 " << a << endl;
    cout << "a에 주소 값 " << &a << endl;

    cout << "-------------------------" << endl;

    cout << "pointer에 저장된 값 " << *pointer << endl;
    cout << "pointer에 주소 값 " << pointer << endl;

    return 0;
}
