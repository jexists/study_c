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
      cout<<"���¹�ȣ : "<<setw(12)<<left<<accid<<
      "\t���� : "<<setw(12)<<name;
      printf("\t�ܾ� : %14.0f��\n",balance);
    }
};
//������ ��ü�迭�� ����
Account p[CN];
//������ index���� ����
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
        cout<<"�۾�����? ";cin>>jobNo;
        switch(jobNo){
             case 1: makeAccid();break;
             case 2: ipkum();break;
             case 3: chulkum();break;
             case 4: one_Inq();break;
             case 5: all_Inq();break;
             default: cout<<"�۾��� �����մϴ�.\n";
                          return 0;
        }//switch
    }//while
    return 0;
}
void chulkum(){
     cout<<"#��� �۾��Դϴ�.\n";
    if(inx==0){
        cout<<"\t�������°� �������� �ʽ��ϴ�. #��� �۾��Ұ�!!!!\n";
        return;//chulkum()�Լ��� ȣ����ġ�� ����
    }
    char accid[SIZE];
    double money;
    bool tw=false;
   while(true){
        cout<<"���¹�ȣ? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"�� �� ��? ";cin>>money;
        }
        int i;bool sw;
        sw=false;//��ݰ��� ã�� �� �ʱⰪ ����
            for(i=0;i<inx;i++){
                if( strcmp( p[i].getAccid(),accid) == 0)
                    { sw=true; break;}
            }
        if(sw==false){
            cout<<"\t��� ���´� �������� �ʽ��ϴ�.  �ٽ��� ������.";
            tw=true;
            continue;
        }
        else {//��ݰ��� ����
            if( p[i].getBalance()==0) {
            printf("\t��ݺҰ�!! ���� �ܰ� : %14.0f��\n",p[i].getBalance() );
                      return;
            }
                while(  p[i].getBalance() <money )//�ܾ�<��ݾ�
                {
                   printf("\t�ܾ��� �����մϴ�. ��ݺҰ�!! �����ѵ�: %14.0f�� �ٽ��� ������. ",
                          p[i].getBalance() );
                   cout<<"�� �� ��? ";cin>>money;
                    continue;
                }//while
            p[i].minusMoney(money);//���
            printf("\t������ܾ� : %14.0f��\n",p[i].getBalance() );
            break;
        }
   }//while
   cout<<"#��� �۾��Ϸ�.\n";
}
void ipkum(){
    cout<<"#�Ա� �۾��Դϴ�.\n";
    if(inx==0){
        cout<<"\t�������°� �������� �ʽ��ϴ�. #�Ա� �۾��Ұ�!!!!\n";
        return;// ipkum()�Լ��� ȣ����ġ�� ���ư�
    }
    char accid[SIZE];    double money;    bool tw=false;
   while(true){
        cout<<"���¹�ȣ? ";fflush(stdin);gets(accid);
        if(tw==false){
            cout<<"�� �� ��? ";cin>>money;
        }
        int i;bool sw;
        sw=false;//�Աݰ��� ã���� �ʱⰪ ����
            for(i=0;i<inx;i++){
                if( strcmp( p[i].getAccid(),accid) == 0)
                    { sw=true; break;}
            }
        if(sw==false){
            cout<<"\t�Ա� ���´� �������� �ʽ��ϴ�.  �ٽ��� ������. ";
            tw=true;
            continue;
        }
        else {//�Աݰ��� ����
            p[i].addMoney(money);
            printf("\t�Ա� �� �ܾ� : %14.0f��\n",p[i].getBalance() );
            break;
        }
   }//while
   cout<<"#�Ա� �۾��Ϸ�.\n";
}
void one_Inq(){
    cout<<"#������ȸ �۾��Դϴ�.\n";
    if(inx==0){
        cout<<"\t�������°� �������� �ʽ��ϴ�.#������ȸ �۾��Ұ�!!!!\n";
        return;//one_Inq()�Լ��� ȣ����ġ�� ���ư�
    }
    char accid[SIZE];
    cout<<"��ȸ ���¹�ȣ? ";fflush(stdin);gets(accid);
    int i;
    bool sw=false;//ã�� �� �ʱⰪ
     for(i=0;i<inx;i++){
        if(   strcmp( p[i].getAccid() , accid) == 0) {sw=true;break;}
     }
     if(sw==false){
        cout<<"\t��ȸ ���´� �������� �ʽ��ϴ�.\n";
        return;
     }
      else
      p[i].disp();
    cout<<"#������ȸ �۾��Ϸ�.\n";
}
void all_Inq(){
    cout<<"#��ü ������ȸ �۾��Դϴ�.\n";
    if(inx==0){
        cout<<"\t�������°� �������� �ʽ��ϴ�.#��ü ������ȸ �۾��Ұ�!!!!\n";
        return;//all_Inq()�Լ��� ȣ����ġ�� ����
    }
    for(int i=0;i<inx;i++){
        p[i].disp();
    }
    cout<<"#��ü ������ȸ �۾��Ϸ�.\n";
}
void makeAccid(){
    cout<<"���°��� �۾��Դϴ�.\n";
    char accid[SIZE],name[SI];
    double money; bool sw;
   do{
        cout<<"���¹�ȣ? ";fflush(stdin);gets(accid);
        sw=false;//�ߺ����� üũ �� �ʱⰪ
        for(int i=0;i<inx;i++){
            if(  strcmp(p[i].getAccid(), accid) == 0  ) {
                cout<<"\t�ߺ��� ���¹�ȣ�Դϴ�. �ٽ��� ������. ";
                sw=true; break;
            }
        }//for
   }while( sw   );
    cout<<"�� �� ��? ";fflush(stdin);gets(name);
    cout<<"�����ݾ�? ";cin>>money;
    p[inx].setData(accid,name,money);
    //p[inx].disp();//p[0],p[1],p[2]
    //cout<<"inx : "<<inx<<endl;
    inx++;//3
   cout<<"#���°��� �۾��Ϸ�.\n";
}
void menu(){
    cout<<"\n  --�޴�--\n";cout<<"1. ���°���\n";
    cout<<"2. �Ա�\n";cout<<"3. ���\n";
    cout<<"4. ������ȸ\n";cout<<"5. ��ü ������ȸ\n";
    cout<<"6. �۾�����\n\n";
}
