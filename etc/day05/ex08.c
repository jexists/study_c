#include <stdio.h>

int main(){

  unsigned char flag = 7;  //  (00000111)

  // flag =  flag & ~2;
   flag &= ~2;

   printf("flag : %u\n", flag);


  // flag(5)  (00000101)
  if(flag & 1){
    printf("00000001 �� ��������\n");
  }else{
    printf("00000001 �� ��������\n");
  }

   // flag(5)  (00000101)
   if(flag & 2){
    printf("00000010 �� ��������\n");
  }else{
    printf("00000010 �� ��������\n");
  }

   // flag(5)  (00000101)
   if(flag & 4){
    printf("00000100 �� ��������\n");
  }else{
    printf("00000100 �� ��������\n");
  }




  return 0;
}
