#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int l = N / 2 + 6;

    for (int i = 1; i <= l; i++)
    {

        for (int j = 0; j < l - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < N; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
