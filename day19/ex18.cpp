#include <iostream>

using namespace std; //cout && endl

int main() {

    char str1[30] = "computer";
    int i = 0;
    cout << str1 << endl;

    cout << "--------------------------" << endl;

    for (i = 0; str1[i] != '\0'; i++) {
        cout << str1[i];
    }

    cout << endl;

    cout << "--------------------------" << endl;

    return 0;
}
