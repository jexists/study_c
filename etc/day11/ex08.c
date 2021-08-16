#include <stdio.h>

int main(){

  int scores[7] = {79, 88, 91, 33, 100, 55, 95};

  //  최고 성적, 최저 성적
  int max, min;

  // scores 배열에서 요소를 하나하나씩 차례대로 뽑아서
  // max 변수에 할당된 값보다 그 요소의 값이 더 크면
  // 해당 요소를 max에 할당함

  // scores 배열에서 요소를 하나하나씩 차례대로 뽑아서
  // max 변수에 할당된 값보다 그 요소의 값이 더 작으면
  // 해당 요소를 min에 할당함

  for(int i = 0 ; i < sizeof(scores) / sizeof(int); i++){

       if(i == 0) {  // 1회차 반복

          max = min = scores[i];

       }else{

          if(scores[i] > max){
            max = scores[i];
          }else if(scores[i] < min){
            min = scores[i];
          }

       }  // outer if

  } // for

  printf("최고성적 : %d점\n", max);
  printf("최저성적 : %d점\n", min);


  return 0;
}
