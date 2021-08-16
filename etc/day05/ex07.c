#include <stdio.h>

int main(){

  unsigned char flag = 0;

  flag |= 1;   // flag = flag | 1;  (00000001)
  printf("flag : %u\n", flag);  // flag : 1

  flag |= 2;   // flag = flag | 2;  (00000010)
  printf("flag : %u\n", flag);  // flag : 3

  flag |= 4;   // flag = flag | 4;   (00000100)

  printf("flag : %u\n", flag);  // flag : 7
  printf("------------------------------\n");

  // flag(7)  (00000001)
  if(flag & 1){
    printf("00000001 이 켜져있음\n");
  }else{
    printf("00000001 이 꺼져있음\n");
  }

   // flag(7)
   if(flag & 2){
    printf("00000010 이 켜져있음\n");
  }else{
    printf("00000010 이 꺼져있음\n");
  }

   // flag(7)
   if(flag & 4){
    printf("00000100 이 켜져있음\n");
  }else{
    printf("00000100 이 꺼져있음\n");
  }




  return 0;
}
