#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num,positiveNum = 0,negativeNum = 0;
    for (int i=0 ; i < n; i++)

    {
        scanf("%d", &num);
        if (num > 0)
            positiveNum+=num;
        else if (num < 0)
            negativeNum+=num;
    }
    printf("%d ", positiveNum);
    printf("%d", negativeNum);
    

    return 0;
}
