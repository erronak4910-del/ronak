#include <stdio.h>

int main() {
    int i, j, s;

    for(i = 5; i >= 1; i--) {

        for(s = 5; s > i; s--)
            printf("  ");

        int val = 1;

        for(j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val;
        }
        printf("\n");
    }
 
}