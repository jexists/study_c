#include <iostream>

using namespace std;

void test();

namespace NS_1 {
    int n = 300;
}

int main() {

    int n = 100;

    cout << "main() 함수 시작" << endl;

    test();

    for (int i = 1; i < 5; i++) {
        cout << "for 반복문의 범위(scope)" << endl;
        cout << " i :" << i << endl;
    }

    cout << "-------------------------------------------" << endl;


    for (int i = 1; i < 5; i++) {
        int n = 200;
        cout << "for 반복문의 범위(scope)" << endl;
        cout << " i :" << i << endl;
        cout << " namespace NS_1의 n :" << NS_1::n << endl;
        cout << " n :" << n << endl;
    }

    cout << "-------------------------------------------" << endl;

    //for 문 내부에서 선언된 변수와 for 문 외부에서 선언된 변수의 이름이 같은 경우에는
    //for 문 내부에서는 내부에서 선언된 변수를 우선적으로 참조하고
    //for 문 외부에서는 외부에서 선언된 변수를 우선적으로 참조

    cout << "n :" << n << endl;

    cout << "namespace NS_1의 n :" << NS_1::n << endl;

    cout << "main() 함수 종료" << endl;


    return 0;
}

void test() {

    cout << "test() 함수 시작" << endl;

    cout << "test() 함수 종료" << endl;
}
