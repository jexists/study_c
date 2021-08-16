#include <iostream>

//using namespace std; //cout && endl

void test();

namespace NS_1 {
    int n = 300;
}

int main() {

    int n = 100;

    std::cout << "main() 함수 시작" << std::endl;

    test();

    for (int i = 1; i < 5; i++) {
        std::cout << "for 반복문의 범위(scope)" << std::endl;
        std::cout << " i :" << i << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;


    for (int i = 1; i < 5; i++) {
        int n = 200;
        std::cout << "for 반복문의 범위(scope)" << std::endl;
        std::cout << " i :" << i << std::endl;
        std::cout << " namespace NS_1의 n :" << NS_1::n << std::endl;
        std::cout << " n :" << n << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    //for 문 내부에서 선언된 변수와 for 문 외부에서 선언된 변수의 이름이 같은 경우에는
    //for 문 내부에서는 내부에서 선언된 변수를 우선적으로 참조하고
    //for 문 외부에서는 외부에서 선언된 변수를 우선적으로 참조

    std::cout << "n :" << n << std::endl;

    std::cout << "namespace NS_1의 n :" << NS_1::n << std::endl;

    std::cout << "main() 함수 종료" << std::endl;


    return 0;
}

void test() {

    std::cout << "test() 함수 시작" << std::endl;

    std::cout << "test() 함수 종료" << std::endl;
}
