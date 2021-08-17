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
        //����޼ҵ� (Ŭ���� ���ο� �ִ� �Լ�): ������
        void setData(const char *_name, int _age, double _weight){
            strcpy(name, _name);
            age = _age;
            weight = _weight;
        };

        void display(){
            cout << "�̸� :" << name << endl;
            cout << "���� :" << age << endl;
            cout << "ü�� " << weight << endl;
        };
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
