#include <stdio.h>

int cubeSum(int n);

int main() {
    printf("Wynik 1: %d\n", cubeSum(3));
    printf("Wynik 2: %d\n", cubeSum(5));
    return 0;
}

int cubeSum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i*i*i;
    }
    return result;
}