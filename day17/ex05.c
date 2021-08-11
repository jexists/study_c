


#include <stdio.h>
#include <string.h> //memset()
#include <stdlib.h> //malloc(), free()


int main() {

   int num1 = 32;
   int num2 = 7;
   float num3;

   num3 = num1 / num2;
   printf("num3: %f\n", num3);

   //형변환
   num3 = (float)num1 / num2;
   //큰 변수 타입으로 연산됨
   //float .6까지 정확함 그이후는 안정확.....!
   //정확한 걸 원하면 double 사용

   printf("num3: %f\n", num3);



   printf("----------------------------------------------\n");

   int *integerPointer = malloc(sizeof(int));

   char *characterPointer;

   *integerPointer = 0x12345678;


   printf("integerPointer: 0x%x\n", integerPointer);
   printf("*integerPointer: 0x%x\n", *integerPointer);


   characterPointer = (char *)integerPointer;

   printf("characterPointer: 0x%x\n", characterPointer);
   printf("*characterPointer: 0x%x\n", *characterPointer);

   free(integerPointer);



    return 0;
}
