#include <stdio.h>

#include <string.h>

int main()
{

    char srt[10000];
    int count[26] = {0};
    scanf("%s", srt);
    int len = strlen(srt);
    for (int i = 0; i < len; i++)
    {
        if (srt[i] >= 'a' && srt[i] <= 'z')
        {
            count[srt[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}
