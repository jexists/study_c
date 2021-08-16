#include <stdio.h>
#include <stdlib.h>

int main(){

  int arrNum1[10] = {  1,  2,  3,   4,   5,  6,   7,   8,   9, 10};
  int arrNum2[10] = {11, 12,13, 14, 15, 16, 17, 18, 19, 20};
  int arrNum3[10] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

  int **p = malloc(sizeof(int *) * 3);

  p[0] = arrNum1;
  p[1] = arrNum2;
  p[2] = arrNum3;


  for(int i = 0; i < 3 ; i++) {
    free(p[i]);
  }
  free(p);

  return 0;
}
