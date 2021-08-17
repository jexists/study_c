#include <iostream>
#include <cstring>

#define SI 20


using namespace std;

//class = struct + function
class PersonalInfo{
    private:
        //�Ӽ� (�������)
        //private:�� �����ص� public�� ������ �������� private ���� ������
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

        //����޼ҵ� (Ŭ���� ���ο� �ִ� �Լ�): ������
        void setData(const char *_name, int _age, double _weight){
            strcpy(name, _name);
            age = _age;
            weight = _weight;
        };

};



int main()
{
    cout << "Hello world!" << endl;

    //Personal Info ��ü ���� p ����
    PersonalInfo p;

    //private ��� �������� Ŭ���� �ۿ����� ���� ������ �ȵ�

    //cout << p.name << endl;
    //cout << p.age << endl;
    //cout << p.weight << endl;

    p.setData("����ȣ", 29, 72.5);

    cout << "------------------------------!" << endl;


    cout << "�̸� : "<< p.getName() << endl;
    cout << "���� : "<< p.getAge() << endl;
    cout << "ü�� : "<< p.getWeight() << endl;

    cout << "------------------------------!" << endl;

    return 0;
}
