#include <stdio.h>

int main () {
    
    int height=0;
    int num;
    while (height<=0)
    {
        printf("Height: ");
        scanf("%d", &height);
        if (height>0) {
            for (int i=1; i<=height; i++) {
                num = height-i;
                for (int j=1; j<=height; j++) {
                    if (j<=num) {
                        printf(" ");
                        continue;
                    }
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
    }

}