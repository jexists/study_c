
#include <stdio.h>

int main() {
    int number;

    printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä :");
    scanf("%d", &number);

    //number°¡ Â¦¼öÀÎÁö ¾Ë¾Æº¸±â
    //Â¦¼ö = 2ÀÇ ¹è¼ö

    int result = (number % 2 == 0) ? 2 : -1;


    printf("result: %d\n", result);


    (number % 2 == 0) ?  printf("Â¦¼ö\n") : printf("È¦¼ö\n");

    // »ïÇ×¿¬»êÀÚ => if¹®
    if(number %2 == 0) {
         printf("Â¦¼ö\n");
    } else {
         printf("È¦¼ö\n");
    }

    return 0;
}
