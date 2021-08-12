

#include <stdio.h>


int add(int n1, int n2) {
    return n1 + n2;
}


//함수 포인터를 반환 값으로 지정
//이름 짓고 이름으로만 호출 + ()
int (*getAdd())(int, int) {
    return add;
}


int main() {



    printf("%d\n", getAdd()(11, 22));

    printf("------------\n");


    return 0;
}

