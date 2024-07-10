#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = k; j > 0; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        if (i < n - 1)
        {
            s--;
            k += 1;
        }
    }
    return 0;
}
