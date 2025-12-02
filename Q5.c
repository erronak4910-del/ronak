#include <stdio.h>

int main() {
    int i, j, s, n = 5;

    for(i = 1; i <= n; i++) {

        for(j = n; j > i; j--) {
            printf("  ");
        }

        for(s = n - i + 1; s <= n; s++) {
            printf("%d ", s);
        }

        for(s = n - 1; s >= n - i + 1; s--) {
            printf("%d ", s);
        }

        printf("\n");
    }
}
