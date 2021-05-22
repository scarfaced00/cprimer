#include <stdio.h>

int main() {
    int mul_two[3][9];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            mul_two[i][j] = (i + 2) * (j + 1);
            printf("%d ", mul_two[i][j]);
        }
        printf("\n");
    }

}