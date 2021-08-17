#include <iostream>
#include <cstring>

#define SI 20


using namespace std;

//class = struct + function
class PersonalInfo{
    private:
        //속성 (멤버변수)
        char name[SI];
        int age;
        double weight;
    public:
        //멤버메소드 (클래스 내부에 있는 함수)
        void setData(const char *_name, int _age, double _weight);
        void display();
};

inline void PersonalInfo::setData(const char *_name, int _age, double _weight) {

    strcpy(name, _name);
    age = _age;
    weight = _weight;

};

inline void PersonalInfo::display() {

    cout << "이름 :" << name << endl;

    cout << "나이 :" << age << endl;

    cout << "체중 " << weight << endl;
};

int main()
{
    cout << "Hello world!" << endl;

    //Personal Info 객체 변수 p 전언
    PersonalInfo p;

    p.setData("유승호", 29, 72.5);

    cout << "------------------------------!" << endl;

    p.display();
    return 0;
}
