
#include <iostream>
#include <iomanip>
#include <cstring>

#define SIZE 15
#define SI 20
#define CN 10
using namespace std;


class Accout{
    char accountID[SIZE];
    char name[SI];
    double balance;

public:
    double getBalance() {
        return balance;
    }
    void minusMoney(double money) {
        balance -= money;
    }
    void addMoney(double money) {
        balance += money;
    }
    char * getAccountID() {
        return accoutID;
    }

    void setData(char *_accountID, char *_name, double money) {
        strcpy(accountID, _accountID);
        strcpy(name, _name);
        balance = money;
    }

    void display() {
        cout << "���¹�ȣ : " << setw(12) << left << accountID << "\t ����: " << setw(12) << name;

        printf("\t �ܾ�: %14.0f��\n", balance);
    }
};


//�������� ��ü �迭 �����ϱ�
Accout acc[CN];

//���� ���� ����
int idx = 0;

//�Լ� ��������
void menu();
void makeAccoutID();
void all_Inq();
void one_Inq();
void ipkum();
void chulkum();


int main() {

    int business;
    while(true) {
        menu();
        cout << "��������: "; cin >> business;

        switch(business) {
            case 1: makeAccout(); break;
            case 2: ipkum(); break;
            case 3: chulkum(); break;
            case 4: one_Inq(); break;
            case 5: all_Inq(); break;
            default: cout << "������ �����մϴ�.\n";
            return 0;
        }//switch

    }//while

    cout << "------------------------------!" << endl;

    return 0;
}

void chulkm() {
    cout << "%��� �����Դϴ� \n";
    if(idx == 0) {
        cout << "\t�������°� �����ϴ�. ����� �� �����ϴ�.\n";
        return; //chulkum()�Լ��� ȣ�� ��ġ�� ���ư�
    }

    char accoutID[SIZE];
    double money;
    bool ts = false;

    while(true) {
        cout << "���¹�ȣ :";fflush(stdin); gets(accoutID);
        if(ts == false) {
            cout << " ��ݾ� : "; cin >> money;
        }
        int i; bool sw;
        sw = false; //��ݰ��¿��� ����ϱ� �� �ʱⰪ ����
        for(i = 0; i < idx; i++) {
            if (strcmp(p[i].getAccountID(), accoutID) == 0) {
                sw = true; break;
            }
        }

        if(sw == false) {
            cout << "\t��ݰ��°� �����ϴ�....";
            tw = true;
            continue;
        } else {//��� ���°� �ִ� ���
            if(p[i].getBalance() == 0) {
                printf("\t ����� �� �����ϴ�. - �ܾ� : %14.0f��\n", p[i].getBalance());
                return;
            }
            while(p[i].getBalance() < money) { //�ܾ� < ��ݾ�
                printf("\t �ܾ� ����");
                cout << "��ݾ� : "; cin >> money;
                continue;
            } //while
            p[i].minusMoney(money); //���

            printf("\t��� �� �ܾ� : 14.0f��\n", p[i].getBalance());
            break;
        }

    }// while

    cout << "#��� ���� �Ϸ�\n";
}

void ipkum() {
    cout <<"#�Ա� ���� ���� \n";
    if(idx == 0) {
        cout << "\t�������°� �����ϴ�. �Ա��۾��� �� �� �����ϴ�.\n";
        return; // ipkum()�Լ� ȣ�� ��ġ�� ���ư�
    }
    char accountID[SIZE]; double money; bool tw = false;
    while(true) {
        cout << "���¹�ȣ : "; fflush(stdin); gets(accountID);
        if(tw == false) {
            cout << "�Աݾ� : "; cin >> money;
        }
        sw = false;
        for(i = 0l i < idx; i++) {
            if(strcmp(p[i].getAccountID(), accountID) == 0){
                sw = true; break;
            }
        }
        if(sw == false) {
            cout << "\t�Աݰ��°� �����ϴ�....";
            tw = true;
            continue;
        } else {
            p[i].addMoney(money);
            printf("\t");
        }
        //-----------------------------
    }
}
