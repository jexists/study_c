#include <iostream>
using namespace std;

namespace NS_1{
  int n1 = 300;
}

namespace NS_2{
  int n2 = 500;
}

int main(){

  cout <<  "n1 in NS_1 : " << NS_1::n1 << endl;
  cout <<  "n2 in NS_2 : " << NS_2::n2 << endl;

  return 0;
}
