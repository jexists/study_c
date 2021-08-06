#include <stdio.h>

int main(){

  int arrNum[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

  printf("arrNum 배열의 크기(길이 : 속에 들어있는 요소의 개수) : %d\n", sizeof(arrNum));
  printf("arrNum 배열의 크기(길이 : 속에 들어있는 요소의 개수) : %d\n", sizeof(arrNum) / sizeof(int));


  int numbers[10];
  // int index = 10;
  int count = sizeof(numbers) / sizeof(int);

  // index = count - 1;

  int num = 10;
  for(int i = 0; i < sizeof(numbers) / sizeof(int) ; i++){
    numbers[i] = ++num;
    printf("numbers[%d] : %d\n", i, numbers[i]);
  }

  pritf("--------------------------------------\n");

   for(int i = sizeof(numbers) / sizeof(int) - 1; i >= 0; i--){
    printf("numbers[%d] : %d\n", i, numbers[i]);
   }

  return 0;
}
