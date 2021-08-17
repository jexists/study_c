#include <iostream>
#include <cstring>

#define SI 20


using namespace std;

//class = struct + function
class PersonalInfo{
    private:
        //�Ӽ� (�������)
        char name[SI];
        int age;
        double weight;
    public:
        //����޼ҵ� (Ŭ���� ���ο� �ִ� �Լ�)
        void setData(const char *_name, int _age, double _weight);
        void display();
};

inline void PersonalInfo::setData(const char *_name, int _age, double _weight) {

    strcpy(name, _name);
    age = _age;
    weight = _weight;

};

inline void PersonalInfo::display() {

    cout << "�̸� :" << name << endl;

    cout << "���� :" << age << endl;

    cout << "ü�� " << weight << endl;
};

int main()
{
    cout << "Hello world!" << endl;

    //Personal Info ��ü ���� p ����
    PersonalInfo p;

    p.setData("����ȣ", 29, 72.5);

    cout << "------------------------------!" << endl;

    p.display();
    return 0;
}
