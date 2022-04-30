#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main() {

    SetConsoleCP(1251);//
    SetConsoleOutputCP(1251);//

    char *locale = setlocale(LC_ALL, ""); // русификация вывода на консоль

    const int N = 5;

    int map[N][N];

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            map[i][j] = 0;
        }
    }

    int x, y;

    for(int i = 0; i < N; ++i) {
        x = rand() % N;
        y = rand() % N;
        map[x][y] = 1;
    }

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    while(1) {
        while (getchar() != '\n') continue; // чистим буфер
        printf("Введите координаты цели:\n");
        scanf("d", x);
        scanf("d", y);

        if(map[x][y] == 1) {
            printf("Попадание! \n");
            map[x][y] = 0;
        }
        else {
            printf("Промах! \n");
        }
    }

    return 0;
}
