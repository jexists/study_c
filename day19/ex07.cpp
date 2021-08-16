#include <iostream>

using namespace std;

int main() {

    int score;

    cout << "점수를 입력하세요 ";

    cin >> score;

    if(score > 100 || score < 0) {
        cout << "점수를 올바로 입력해 주세요" << endl;
    } else if (score >=90) {
        cout << "A학점입니다." << endl;
    } else if (score >=80) {
        cout << "B학점입니다." << endl;
    } else if (score >=70) {
        cout << "C학점입니다." << endl;
    } else if (score >=60) {
        cout << "D학점입니다." << endl;
    } else {
        cout << "F학점입니다." << endl;
    }

    return 0;
}
