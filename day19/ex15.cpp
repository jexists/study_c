#include <iostream>

using namespace std; //cout && endl

int main() {

    int score1, score2, score3;
    //int scores[3];
    int scores[3] = {99, 88, 100};


    cout << "score1�� ����� �� " << score1 << endl;
    cout << "score1�� �ּ� �� " << &score1 << endl;
    cout << "score2�� �ּ� �� " << &score2 << endl;
    cout << "score3�� �ּ� �� " << &score3 << endl;

    cout << "-------------------------" << endl;

    cout << "�迭 scores �ּ� " << scores << endl;

    cout << "-------------------------" << endl;

    //�迭�� �ּ� ���� (+4)
    //�迭 �ּҿ� �迭 ù��° �ּҰ� ����
    cout << "score1�� �ּ� �� " << &scores[0] << endl;
    cout << "score2�� �ּ� �� " << &scores[1] << endl;
    cout << "score3�� �ּ� �� " << &scores[2] << endl;


    cout << "-------------------------" << endl;

    //�迭�� �ּ� ���� (+4)
    //�迭 �ּҿ� �迭 ù��° �ּҰ� ����
    cout << "score1�� �ּ� �� " << scores << endl;
    cout << "score2�� �ּ� ��(score+1) " << scores + 1 << endl;
    cout << "score3�� �ּ� ��(score+2) " << scores + 2 << endl;



    cout << "-------------------------" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "score[" << i <<"]�� �ּ� �� " << &scores[i] << endl;
    }


    cout << "-------------------------" << endl;


    cout << "score1�� �ּ� �� " << &scores[0] << endl;
    cout << "score2�� �ּ� �� " << &scores[1] << endl;
    cout << "score3�� �ּ� �� " << &scores[2] << endl;


    return 0;
}
