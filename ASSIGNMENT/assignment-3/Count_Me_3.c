#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int capitalCount, smallCount, digitCount;
        capitalCount = smallCount = digitCount = 0;
        char str[100000];
        scanf("%s", str);
        int len = strlen(str);

        for (int j = 0; j < len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                capitalCount++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                smallCount++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}
