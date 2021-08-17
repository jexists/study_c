#include <iostream>

using namespace std;

int main(){

  float realNumber;
  // 반올림할 자릿수
  int n;
  // for 문 index 변수
  int i;
  // 계산 중 임싯값을 저장하는 변수
  int tmp;

  cout << "실수를 입력하세요 : ";
  cin >> realNumber;
  cout << "반올림할 자릿수를 입력하세요 : ";
  cin >> n;

  // 반올림할 자릿수만큼 반복하면서
  // 원래 입력한 실수에 10을 곱함
  for(i = 0; i < n; i++){
    realNumber = realNumber * 10;
  }

  // for문에서 구해진 수에 5을 더함
   realNumber = realNumber + 5;
   tmp = (int)realNumber / 10;
   realNumber = (float)tmp;

  // 반올림할 자릿수에서 1 뺀 수 만큼 반복하면서
  // realNumber 를 10으로 나눔
   for(i = 0; i < n -1; i++){
      realNumber = realNumber / 10;
   }

  cout << "반올림한 결괏값 : "  << realNumber << endl;

  return 0;
}
