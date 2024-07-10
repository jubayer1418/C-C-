#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int k;
        scanf("%d", &k);
        char a[k + 1];
        scanf("%s", a);

        int p = 0, t = 0;
        for (int j = 0; j < k; j++)
        {
            if (a[j] == 'P')
            {
                p++;
            }
            else
            {
                t++;
            }
        }
        if (p > t)
        {
            printf("Pathaan\n");
        }
        else if (p < t)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}
