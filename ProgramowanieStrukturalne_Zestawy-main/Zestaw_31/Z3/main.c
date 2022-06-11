#include <stdio.h>

int countNeg(int n, int m, int arr1[n][m], int arr2[n][m]);

int main() {
    int tab1[][2] = {{-4, -6}, {1, 9}};
    int tab2[][2] = {{1,-1}, {0,2}};
    printf("Ujemne: %d\n", countNeg(2,2, tab1, tab2));
    return 0;
}

int countNeg(int n, int m, int arr1[n][m], int arr2[n][m])
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i][j] < 0)
                result++;
            if(arr2[i][j] < 0)
                result++;
        }
    }
    return result;
}