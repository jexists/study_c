#include <iostream>

using namespace std;

int main(){

  float realNumber;
  // �ݿø��� �ڸ���
  int n;
  // for �� index ����
  int i;
  // ��� �� �ӽ˰��� �����ϴ� ����
  int tmp;

  cout << "�Ǽ��� �Է��ϼ��� : ";
  cin >> realNumber;
  cout << "�ݿø��� �ڸ����� �Է��ϼ��� : ";
  cin >> n;

  // �ݿø��� �ڸ�����ŭ �ݺ��ϸ鼭
  // ���� �Է��� �Ǽ��� 10�� ����
  for(i = 0; i < n; i++){
    realNumber = realNumber * 10;
  }

  // for������ ������ ���� 5�� ����
   realNumber = realNumber + 5;
   tmp = (int)realNumber / 10;
   realNumber = (float)tmp;

  // �ݿø��� �ڸ������� 1 �� �� ��ŭ �ݺ��ϸ鼭
  // realNumber �� 10���� ����
   for(i = 0; i < n -1; i++){
      realNumber = realNumber / 10;
   }

  cout << "�ݿø��� �ᱣ�� : "  << realNumber << endl;

  return 0;
}
