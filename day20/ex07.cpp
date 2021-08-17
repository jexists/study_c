
#include <iostream>
#include <iomanip>
#include <cstring>

#define SI 20
#define CN 3
using namespace std;


class PersonalInfo{
    char name[SI];
    int age;
    double weight;

public:
    void displayInfo() {
        cout << setw(12) << name << "\t" << setw(3) << age;
        printf("\t%5.1f\n", weight);

    }

    void setInfo(char * _name, int _age, double _weight) {
        strcpy(name, _name);
        age = _age;
        weight = _weight;
    }
};


int main() {

    PersonalInfo p[CN];

    char name[SI];
    int age;
    double weight;

    for(int i = 0; i < CN; i++) {
        cout << "#" << i+1 << ")\n";
        cout << "         이름 : "; fflush(stdin); gets(name);
        cout << "         나이 : "; cin >> age;
        cout << "         체중 : "; cin >> weight;

        p[i].setInfo(name, age, weight);

    }

    cout << "\n           *개인정보* \n";
    cout << "\t이름 \t 나이 \t 체중 \n" ;

    for(int i = 0; i < CN; i++) {

        p[i].displayInfo();

    }



    cout << "------------------------------!" << endl;

    return 0;
}
