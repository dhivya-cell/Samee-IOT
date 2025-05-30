#include <stdio.h>

int main() {
    int ages[5] = {20, 22, 18, 35, 48};
    int i;

    printf("Ages: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");

    return 0;
}

