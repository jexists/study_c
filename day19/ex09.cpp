#include <iostream>

using namespace std;

void test();

namespace NS_1 {
    int n = 300;
}

int main() {

    int n = 100;

    cout << "main() �Լ� ����" << endl;

    test();

    for (int i = 1; i < 5; i++) {
        cout << "for �ݺ����� ����(scope)" << endl;
        cout << " i :" << i << endl;
    }

    cout << "-------------------------------------------" << endl;


    for (int i = 1; i < 5; i++) {
        int n = 200;
        cout << "for �ݺ����� ����(scope)" << endl;
        cout << " i :" << i << endl;
        cout << " namespace NS_1�� n :" << NS_1::n << endl;
        cout << " n :" << n << endl;
    }

    cout << "-------------------------------------------" << endl;

    //for �� ���ο��� ����� ������ for �� �ܺο��� ����� ������ �̸��� ���� ��쿡��
    //for �� ���ο����� ���ο��� ����� ������ �켱������ �����ϰ�
    //for �� �ܺο����� �ܺο��� ����� ������ �켱������ ����

    cout << "n :" << n << endl;

    cout << "namespace NS_1�� n :" << NS_1::n << endl;

    cout << "main() �Լ� ����" << endl;


    return 0;
}

void test() {

    cout << "test() �Լ� ����" << endl;

    cout << "test() �Լ� ����" << endl;
}
