#include <stdio.h>
#include "stdlib.h"
#include "time.h"


#define N 5

int main() {
    srand(time(NULL));
    int array[N][N];
    int x, y;
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            array[i][j] = (rand() % 100) <= 30 ? 1 : 0;
        }
    }
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%i ", array[i][j]);
        }
        printf("\n");
    }

    while (1) {
        scanf("%i %i", &x, &y);

        if (array[x][y] == 0) {
            printf("past!, %i\n", array[x][y]);
        }
        else {
            printf("hit!, %i\n", array[x][y]);
        }
    }

    return 0;
}
