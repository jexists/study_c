#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i+=2) {
        for(int j = 0; j < i; j+=2) {
            printf(" ");
        }
       for(int j = 0; j < 5-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
