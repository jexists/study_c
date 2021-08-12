


#include <stdio.h>




void swapElement(int arr[], int idx1, int idx2) {

    int cup;

    cup = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = cup;
}


void printArray(int arrNums[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arrNums[i]);
    }
    printf("\n =========================== \n");
}
int main() {

    int arrNums[5] = {1, 2, 3, 4, 5};
    int arrSize = sizeof(arrNums) / sizeof(int);

    printf("\n -- swapElement함수 호출 전 -- \n");

    printArray(arrNums, arrSize);

    //arrNums 배열 인덱스 0번째와 인덱스1번째 데이터가 서로 바뀜.
    swapElement(arrNums, 0, 1);


    printf("\n -- swapElement함수 호출 후 -- \n");

    printArray(arrNums, arrSize);

    swapElement(arrNums, 2, 3);


    printf("\n -- swapElement함수 호출 후 -- \n");

    printArray(arrNums, arrSize);


    return 0;
}

