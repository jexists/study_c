
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
        cout << "계좌번호 : " << setw(12) << left << accountID << "\t 고객명: " << setw(12) << name;

        printf("\t 잔액: %14.0f원\n", balance);
    }
};


//전역에서 객체 배열 생성하기
Accout acc[CN];

//전역 변수 선언
int idx = 0;

//함수 프로토콜
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
        cout << "업무선택: "; cin >> business;

        switch(business) {
            case 1: makeAccout(); break;
            case 2: ipkum(); break;
            case 3: chulkum(); break;
            case 4: one_Inq(); break;
            case 5: all_Inq(); break;
            default: cout << "업무를 종류합니다.\n";
            return 0;
        }//switch

    }//while

    cout << "------------------------------!" << endl;

    return 0;
}

void chulkm() {
    cout << "%출금 업무입니다 \n";
    if(idx == 0) {
        cout << "\t개설계좌가 없습니다. 출금할 수 없습니다.\n";
        return; //chulkum()함수의 호출 위치로 돌아감
    }

    char accoutID[SIZE];
    double money;
    bool ts = false;

    while(true) {
        cout << "계좌번호 :";fflush(stdin); gets(accoutID);
        if(ts == false) {
            cout << " 출금액 : "; cin >> money;
        }
        int i; bool sw;
        sw = false; //출금계좌에서 출금하기 전 초기값 설정
        for(i = 0; i < idx; i++) {
            if (strcmp(p[i].getAccountID(), accoutID) == 0) {
                sw = true; break;
            }
        }

        if(sw == false) {
            cout << "\t출금계좌가 없습니다....";
            tw = true;
            continue;
        } else {//출금 계좌가 있는 경우
            if(p[i].getBalance() == 0) {
                printf("\t 출금할 수 없습니다. - 잔액 : %14.0f원\n", p[i].getBalance());
                return;
            }
            while(p[i].getBalance() < money) { //잔액 < 출금액
                printf("\t 잔액 부족");
                cout << "출금액 : "; cin >> money;
                continue;
            } //while
            p[i].minusMoney(money); //출금

            printf("\t출금 후 잔액 : 14.0f원\n", p[i].getBalance());
            break;
        }

    }// while

    cout << "#출금 업무 완료\n";
}

void ipkum() {
    cout <<"#입금 업무 시작 \n";
    if(idx == 0) {
        cout << "\t개설계좌가 없습니다. 입금작업을 할 수 없습니다.\n";
        return; // ipkum()함수 호출 위치로 돌아감
    }
    char accountID[SIZE]; double money; bool tw = false;
    while(true) {
        cout << "계좌번호 : "; fflush(stdin); gets(accountID);
        if(tw == false) {
            cout << "입금액 : "; cin >> money;
        }
        sw = false;
        for(i = 0l i < idx; i++) {
            if(strcmp(p[i].getAccountID(), accountID) == 0){
                sw = true; break;
            }
        }
        if(sw == false) {
            cout << "\t입금계좌가 없습니다....";
            tw = true;
            continue;
        } else {
            p[i].addMoney(money);
            printf("\t");
        }
        //-----------------------------
    }
}
