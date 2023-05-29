#include <stdio.h>

int main() {
    int w, h;

    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);

    printf("Enter the height of the rectangle: ");
    scanf("%d", &h);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || i == h-1 || j == 0 || j == w-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
   printf("\n");  
    }

    return 0;
}
