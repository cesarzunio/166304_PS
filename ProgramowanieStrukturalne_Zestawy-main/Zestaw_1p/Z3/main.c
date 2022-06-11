#include <stdio.h>
#include <stdlib.h>

int** arrtdCreate(int n, int m)
{
    int** tab = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n ; i++)
    {
        *(tab + i) = (int*)malloc(sizeof(int) * m);
    }
    return tab;
}

int tdMaxMinDiff(int** tdArr, int n, int m);

int main()
{
    int** tab = arrtdCreate(3,2);
    *(*(tab + 0) + 0) = 3;
    *(*(tab + 0) + 1) = -5;
    *(*(tab + 1) + 0) = 7;
    *(*(tab + 1) + 1) = 3;
    *(*(tab + 2) + 0) = 6;
    *(*(tab + 2) + 1) = -5;

    printf("Wynik: %d", tdMaxMinDiff(tab, 3, 2));
    return  0;
}

int tdMaxMinDiff(int** tdArr, int n, int m)
{
    int max = tdArr[0][0];
    int min = tdArr[0][0];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(tdArr[i][j] > max)
                max = tdArr[i][j];
            if(tdArr[i][j] < min)
                min = tdArr[i][j];
        }
    }
    return (max - min);
}