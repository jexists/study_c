#include <stdio.h>

/*
    int arrNums[5] = {1, 2, 3, 4, 5};

    int arrNumbers[3][4]  = {{1, 2, 3, 4},
                                          {5, 6, 7, 8},
                                          {9, 10, 11, 12}};

*/

int main(){

    int n[4] = {15, 16, 17, 18};

   for(int i = 0; i < (sizeof(n) / sizeof(int)); i++){
      printf("n[%d] : %d\n", i, n[i]);
   }


   int arrNumbers[3][4]  = {{11, 12, 13, 14},
                                          {15, 16, 17, 18},
                                          {19, 10, 11, 12}};

  /*
     sizeof(arrNumbers) 64bit * 3 : 192byte
                                           sizeof(int)  :  32bit (4byte)

     arrNumbers[0]  <-- sizeof(int*) : 64bit (8byte)
     arrNumbers[1]  <-- sizeof(int*) : 64bit (8byte)
     arrNumbers[2]  <-- sizeof(int*) : 64bit (8byte)

     row (행)
     sizeof(arrNumbers) / sizeof(arrNumbers[0])

        192 / 64  <-- 3



    col(column) (열)

    arrNumbers[0]  <--  {11, 12, 13, 14}

    sizeof(arrNumbers[0]) / sizeof(int)
       16 / 4  <-- 4



  */

   printf("arrNumbers[2][3] : %d\n",  arrNumbers[2][3]);
   printf("arrNumbers[1][1] : %d\n",  arrNumbers[1][1]);
   printf("arrNumbers[0][3] : %d\n",  arrNumbers[0][3]);
   printf("arrNumbers[2][0] : %d\n",  arrNumbers[2][0]);

   printf("----------------------------------------\n");

   for(int i =0 ; i < 3; i++) {
    for(int j = 0; j < 4; j++){

        printf("arrNumbers[%d][%d] : %d\n", i, j, arrNumbers[i][j]);

    }
   }

  printf("----------------------------------------\n");

   int value = 10;
   for(int i =0 ; i < 3; i++) {
    for(int j = 0; j < 4; j++){

        arrNumbers[i][j] = ++value;

    }
   }
  printf("----------------------------------------\n");

   for(int i =0 ; i < 3; i++) {
    for(int j = 0; j < 4; j++){

        printf("arrNumbers[%d][%d] : %d\n", i, j, arrNumbers[i][j]);

    }
   }
  printf("----------------------------------------\n");


  int row = 0;
  int col = 0;

  row = sizeof(arrNumbers) / sizeof(arrNumbers[0]);
  col  = sizeof(arrNumbers[0]) / sizeof(int);


   for(int i =0 ; i < row; i++) {
    for(int j = 0; j < col; j++){

        printf("arrNumbers[%d][%d] : %d\n", i, j, arrNumbers[i][j]);

    }
   }
  printf("----------------------------------------\n");

  // 인덱스를 0까지 사용하기 위해서
  // row-1, col-1 부터 시작함
  for(int i = row-1 ; i >= 0; i--) {
    for(int j = col-1; j >= 0; j--){

        printf("arrNumbers[%d][%d] : %d\n", i, j, arrNumbers[i][j]);

    }
   }
  printf("----------------------------------------\n");


  return 0;
}
