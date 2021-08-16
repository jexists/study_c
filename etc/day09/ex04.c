#include <stdio.h>

int main(){

  char number[16] = "12345";

  printf("number[0] : %d\n",number[0]);
  printf("number[1] : %d\n",number[1]);
  printf("number[2] : %d\n",number[2]);
  printf("number[3] : %d\n",number[3]);
  printf("number[4] : %d\n",number[4]);
  printf("--------------------------\n");

  printf("number[0] : %c\n",number[0]);
  printf("number[1] : %c\n",number[1]);
  printf("number[2] : %c\n",number[2]);
  printf("number[3] : %c\n",number[3]);
  printf("number[4] : %c\n",number[4]);
  printf("--------------------------\n");



  int sum = 0;

  for(int i  = 0; i < 5; i++){

    sum = sum + (number[i] - '0');

  }

  printf("sum : %d\n", sum);

  return 0;
}
