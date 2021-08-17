#include <iostream>
#include <cstring>

#define SI 20


using namespace std;

//class = struct + function
class PersonalInfo{
    private:
        //속성 (멤버변수)
        //private:은 생략해도 public이 나오기 전까지는 private 으로 동작함
        char name[SI];
        int age;
        double weight;
    public:

        char * getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        double getWeight() {
            return weight;
        }

        //멤버메소드 (클래스 내부에 있는 함수): 구연부
        void setData(const char *_name, int _age, double _weight){
            strcpy(name, _name);
            age = _age;
            weight = _weight;
        };

};



int main()
{
    cout << "Hello world!" << endl;

    //Personal Info 객체 변수 p 전언
    PersonalInfo p;

    //private 멤버 변수들은 클래스 밖에서는 직접 접근이 안됨

    //cout << p.name << endl;
    //cout << p.age << endl;
    //cout << p.weight << endl;

    p.setData("유승호", 29, 72.5);

    cout << "------------------------------!" << endl;


    cout << "이름 : "<< p.getName() << endl;
    cout << "나이 : "<< p.getAge() << endl;
    cout << "체중 : "<< p.getWeight() << endl;

    cout << "------------------------------!" << endl;

    return 0;
}
