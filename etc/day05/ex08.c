#include <stdio.h>

int main(){

  unsigned char flag = 7;  //  (00000111)

  // flag =  flag & ~2;
   flag &= ~2;

   printf("flag : %u\n", flag);


  // flag(5)  (00000101)
  if(flag & 1){
    printf("00000001 이 켜져있음\n");
  }else{
    printf("00000001 이 꺼져있음\n");
  }

   // flag(5)  (00000101)
   if(flag & 2){
    printf("00000010 이 켜져있음\n");
  }else{
    printf("00000010 이 꺼져있음\n");
  }

   // flag(5)  (00000101)
   if(flag & 4){
    printf("00000100 이 켜져있음\n");
  }else{
    printf("00000100 이 꺼져있음\n");
  }




  return 0;
}
