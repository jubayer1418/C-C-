#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ar[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int j = 0; j < b; j++)
    {
        printf("%d ", ar[a - 1][j]);
    }

    printf("\n");
    for (int j = 0; j < a; j++)
    {
        printf("%d ", ar[j][b - 1]);
    }

    printf("\n");

    return 0;
}
