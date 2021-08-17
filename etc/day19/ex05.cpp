#include <iostream>

using namespace std;

int main(){
  int radius;
  float area, circumference;

  cout << "반지름 입력 : ";
  cin >> radius;

  area = radius * radius * 3.14;
  circumference = radius * 2 * 3.14;

  cout << "원의 넓이 : " << area << endl;
  cout << "원 둘 레  : " << circumference << endl;


  return 0;
}
