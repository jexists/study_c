#include <stdio.h>


//void: return type - return�ϴ� ���� type
//      return value(��)�� ���� ��� void ���
//hello �Լ��̸�
//() �Ű������� = �Ű������� �������� �ʴ� ��쿡�� �������

//�Լ� ���Ǻ�(definition - define): return type + �Լ��̸� + �Ű�������
//void hello() (�Լ��� �� ù°��)-�Լ��� �����
//{} - �Լ��� body (����-������): �Լ��� �ϴ� ���� ������� �κ�
// �Լ��� ������ ��ġ�� �� �Լ��� ȣ���� ������ ���α׷��� �帧�� ���ư�

//�Լ��� ȣ���� �ؾ� ���� ��
// �Լ��� ȣ��(����)�ϴ� ���:
//�Լ��̸�(�Ű������� ������ ���� �־���);

void hello() { //parameter : �Ű�����


    printf("hello, programming!!!!\n");

    int number = 11;

    printf("number in hello(): %d\n", number);

    return; //��������
}

//int number; //��������

int main() {

    printf("���α׷� ����!!!!\n");

    hello(); //argument ����, ���ڰ�, �μ�
    //hello();

    //int number; //�������� (local variable)

    printf("==========================\n");
    //printf("number in main(): %d\n", number);

    printf("���α׷� ����!!!!\n");
    return 0;

}
