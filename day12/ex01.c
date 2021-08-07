#include <stdio.h>
#include <stdlib.h> // malloc(), free() 선언된 header 파일

int main(){

  int size;

  printf("배열의 크기를 입력하세요 : ");
  scanf("%d", &size);

  // (int type 크기 * 입력받은 값) 만큼 동적메모리 할당
  int *nPointer = malloc(sizeof(int) *size);

  // 입력받은 크기 만큼 반복
  for(int i = 0; i < size; i++){
    // 인덱스로 접근해서 값을 할당함
    nPointer[i] = i + 1;
  }
  // 입력받은 크기 만큼 반복
  for(int i = 0; i < size; i++){
        // 인덱스로 접근해서 값을 출력함
    printf("nPointer[%d] : %d\n", i, nPointer[i]);

  }

  // free() 함수를 호출해서 할당한 메모리를 해제함
  free(nPointer);

  return 0;
}




