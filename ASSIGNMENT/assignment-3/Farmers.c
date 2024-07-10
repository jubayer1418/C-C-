#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int workDay = (a * c) / (a + b);
        int extraDay = c - workDay;
        printf("%d\n", extraDay);

     
    }
    return 0;
}
