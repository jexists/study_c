#include <iostream>

using namespace std; //cout && endl

int main() {

    int score1, score2, score3;
    //int scores[3];
    int scores[3] = {99, 88, 100};


    cout << "score1에 저장된 값 " << score1 << endl;
    cout << "score1에 주소 값 " << &score1 << endl;
    cout << "score2에 주소 값 " << &score2 << endl;
    cout << "score3에 주소 값 " << &score3 << endl;

    cout << "-------------------------" << endl;

    cout << "배열 scores 주소 " << scores << endl;

    cout << "-------------------------" << endl;

    //배열은 주소 연결 (+4)
    //배열 주소와 배열 첫번째 주소가 같다
    cout << "score1에 주소 값 " << &scores[0] << endl;
    cout << "score2에 주소 값 " << &scores[1] << endl;
    cout << "score3에 주소 값 " << &scores[2] << endl;


    cout << "-------------------------" << endl;

    //배열은 주소 연결 (+4)
    //배열 주소와 배열 첫번째 주소가 같다
    cout << "score1에 주소 값 " << scores << endl;
    cout << "score2에 주소 값(score+1) " << scores + 1 << endl;
    cout << "score3에 주소 값(score+2) " << scores + 2 << endl;



    cout << "-------------------------" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "score[" << i <<"]에 주소 값 " << &scores[i] << endl;
    }


    cout << "-------------------------" << endl;


    cout << "score1에 주소 값 " << &scores[0] << endl;
    cout << "score2에 주소 값 " << &scores[1] << endl;
    cout << "score3에 주소 값 " << &scores[2] << endl;


    return 0;
}
