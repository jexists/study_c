#include<iostream>
#include<iomanip>
#include<cstring>
#define SIZE 15
#define SI 20
#define CN 10
using namespace std;
class Account{
   char accid[SIZE];
   char name[SI];
   double balance;
public:
    double getBalance(){ return balance; }
    void minusMoney(double money){  balance-=money;  }
    void addMoney(double money){ balance+=money;   }
    char * getAccid(){  return accid;   }
    void setData(char * _accid,char * _name,double money){
        strcpy(accid,_accid);
        strcpy(name,_name);
        balance=money;
    }
    void disp(){
      cout<<"계좌번호 : "<<setw(12)<<left<<accid<<
      "\t고객명 : "<<setw(12)<<name;
      printf("\t잔액 : %14.0f원\n",balance);
    }
};
//전역의 객체배열의 선언
Account p[CN];
//전역의 index변수 선언
int inx=0;
void menu();
void makeAccid();
void all_Inq();
void one_Inq();
void ipkum();
void chulkum();
int main()
{
    int jobNo;
    while(true){
        menu();
        cout<<"작업선택? ";cin>>jobNo;
        switch(jobNo){
             case 1: makeAccid();break;
             case 2: ipkum();break;
             case 3: chulkum();break;
             case 4: one_Inq();break;
             case 5: all_Inq();break;
             default: cout<<"작업을 종료합니다.\n";
                          return 0;
        }//switch
    }//while
    return 0;
}
void chulkum(){
     cout<<"#출금 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 존재하지 않습니다. #출금 작업불가!!!!\n";
        return;//chulkum()함수의 호출위치로 복귀
    }
    char accid[SIZE];
    double money;
    bool tw=false;
   while(true){
        cout<<"계좌번호? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"출 금 액? ";cin>>money;
        }
        int i;bool sw;
        sw=false;//출금계좌 찾기 전 초기값 설정
            for(i=0;i<inx;i++){
                if( strcmp( p[i].getAccid(),accid) == 0)
                    { sw=true; break;}
            }
        if(sw==false){
            cout<<"\t출금 계좌는 존재하지 않습니다.  다시해 보세요.";
            tw=true;
            continue;
        }
        else {//출금계좌 있음
            if( p[i].getBalance()==0) {
            printf("\t출금불가!! 통장 잔고 : %14.0f원\n",p[i].getBalance() );
                      return;
            }
                while(  p[i].getBalance() <money )//잔액<출금액
                {
                   printf("\t잔액이 부족합니다. 출금불가!! 지급한도: %14.0f원 다시해 보세요. ",
                          p[i].getBalance() );
                   cout<<"출 금 액? ";cin>>money;
                    continue;
                }//while
            p[i].minusMoney(money);//출금
            printf("\t출금후잔액 : %14.0f원\n",p[i].getBalance() );
            break;
        }
   }//while
   cout<<"#출금 작업완료.\n";
}
void ipkum(){
    cout<<"#입금 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 존재하지 않습니다. #입금 작업불가!!!!\n";
        return;// ipkum()함수의 호출위치로 돌아감
    }
    char accid[SIZE];    double money;    bool tw=false;
   while(true){
        cout<<"계좌번호? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"입 금 액? ";cin>>money;
        }
        int i;bool sw;
        sw=false;//입금계좌 찾기전 초기값 설정
            for(i=0;i<inx;i++){
                if( strcmp( p[i].getAccid(),accid) == 0)
                    { sw=true; break;}
            }
        if(sw==false){
            cout<<"\t입금 계좌는 존재하지 않습니다.  다시해 보세요. ";
            tw=true;
            continue;
        }
        else {//입금계좌 있음
            p[i].addMoney(money);
            printf("\t입금 후 잔액 : %14.0f원\n",p[i].getBalance() );
            break;
        }
   }//while
   cout<<"#입금 작업완료.\n";
}
void one_Inq(){
    cout<<"#계좌조회 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 존재하지 않습니다.#계좌조회 작업불가!!!!\n";
        return;//one_Inq()함수의 호출위치로 돌아감
    }
    char accid[SIZE];
    cout<<"조회 계좌번호? ";fflush(stdin);gets(accid);
    int i;
    bool sw=false;//찾기 전 초기값
     for(i=0;i<inx;i++){
        if(   strcmp( p[i].getAccid() , accid) == 0) {sw=true;break;}
     }
     if(sw==false){
        cout<<"\t조회 계좌는 존재하지 않습니다.\n";
        return;
     }
      else
      p[i].disp();
    cout<<"#계좌조회 작업완료.\n";
}
void all_Inq(){
    cout<<"#전체 계좌조회 작업입니다.\n";
    if(inx==0){
        cout<<"\t개설계좌가 존재하지 않습니다.#전체 계좌조회 작업불가!!!!\n";
        return;//all_Inq()함수의 호출위치로 복귀
    }
    for(int i=0;i<inx;i++){
        p[i].disp();
    }
    cout<<"#전체 계좌조회 작업완료.\n";
}
void makeAccid(){
    cout<<"계좌개설 작업입니다.\n";
    char accid[SIZE],name[SI];
    double money; bool sw;
   do{
        cout<<"계좌번호? ";fflush(stdin);gets(accid);
        sw=false;//중복계좌 체크 전 초기값
        for(int i=0;i<inx;i++){
            if(  strcmp(p[i].getAccid(), accid) == 0  ) {
                cout<<"\t중복된 계좌번호입니다. 다시해 보세요. ";
                sw=true; break;
            }
        }//for
   }while( sw   );
    cout<<"고 객 명? ";fflush(stdin);gets(name);
    cout<<"개설금액? ";cin>>money;
    p[inx].setData(accid,name,money);
    //p[inx].disp();//p[0],p[1],p[2]
    //cout<<"inx : "<<inx<<endl;
    inx++;//3
   cout<<"#계좌개설 작업완료.\n";
}
void menu(){
    cout<<"\n  --메뉴--\n";cout<<"1. 계좌개설\n";
    cout<<"2. 입금\n";cout<<"3. 출금\n";
    cout<<"4. 계좌조회\n";cout<<"5. 전체 계좌조회\n";
    cout<<"6. 작업종료\n\n";
}
