#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main() {

    //SetConsoleCP(1251);//
    //SetConsoleOutputCP(1251);//

    //char *locale = setlocale(LC_ALL, ""); // русификация вывода на консоль

    const int N = 5;

    int map[N][N];

    int i, j;
    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            map[i][j] = 0;
        }
    }

    int x, y;

    for(i = 0; i < N; ++i) {
        x = rand() % N;
        y = rand() % N;
        map[x][y] = 1;
    }
    for(i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    while(1) {
        //while (getchar() != '\n') continue; // чистим буфер
        printf("Enter coordinates of target:\n");

        int x_of_prediction, y_of_prediction;

        scanf("d", &x_of_prediction);
        scanf("d", &y_of_prediction);

        if(map[x_of_prediction][y_of_prediction] == 1) {
            printf("Hit! \n");
            map[x_of_prediction][y_of_prediction] = 0;
        }
        else {
            printf("Past! \n");
        }
    }

    return 0;
}
