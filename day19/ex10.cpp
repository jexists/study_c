#include <iostream>

//using namespace std; //cout && endl

void test();

namespace NS_1 {
    int n = 300;
}

int main() {

    int n = 100;

    std::cout << "main() �Լ� ����" << std::endl;

    test();

    for (int i = 1; i < 5; i++) {
        std::cout << "for �ݺ����� ����(scope)" << std::endl;
        std::cout << " i :" << i << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;


    for (int i = 1; i < 5; i++) {
        int n = 200;
        std::cout << "for �ݺ����� ����(scope)" << std::endl;
        std::cout << " i :" << i << std::endl;
        std::cout << " namespace NS_1�� n :" << NS_1::n << std::endl;
        std::cout << " n :" << n << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    //for �� ���ο��� ����� ������ for �� �ܺο��� ����� ������ �̸��� ���� ��쿡��
    //for �� ���ο����� ���ο��� ����� ������ �켱������ �����ϰ�
    //for �� �ܺο����� �ܺο��� ����� ������ �켱������ ����

    std::cout << "n :" << n << std::endl;

    std::cout << "namespace NS_1�� n :" << NS_1::n << std::endl;

    std::cout << "main() �Լ� ����" << std::endl;


    return 0;
}

void test() {

    std::cout << "test() �Լ� ����" << std::endl;

    std::cout << "test() �Լ� ����" << std::endl;
}
