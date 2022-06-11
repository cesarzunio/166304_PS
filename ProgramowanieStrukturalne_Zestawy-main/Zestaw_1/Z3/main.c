#include <stdio.h>
#include <stdlib.h>

int counttdEven(int n, int m, int** tab1, int** tab2);

int** arrtdCreate(int n, int m)
{
    int** tab = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n ; i++)
    {
        *(tab + i) = (int*)malloc(sizeof(int) * m);
    }
    return tab;
}

int main() {
    int** tablica1 = arrtdCreate(2, 3);
    int** tablica2 = arrtdCreate(2, 3);
    *(*(tablica1+0)+0) = 0;
    *(*(tablica1+0)+1) = 1;
    *(*(tablica1+0)+2) = 2;
    *(*(tablica1+1)+0) = 3;
    *(*(tablica1+1)+1) = 4;
    *(*(tablica1+1)+2) = 5;
    *(*(tablica2+0)+0) = 6;
    *(*(tablica2+0)+1) = -7;
    *(*(tablica2+0)+2) = -8;
    *(*(tablica2+1)+0) = -9;
    *(*(tablica2+1)+1) = -10;
    *(*(tablica2+1)+2) = -11;

    printf("Parzyste: %d\n", counttdEven(2, 3, tablica1, tablica2));
    return 0;
}

int counttdEven(int n, int m, int** tab1, int** tab2)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (tab1[i][j] % 2 == 0)
                result++;
            if (tab2[i][j] % 2 == 0)
                result++;
        }
    }
    return result;
}
