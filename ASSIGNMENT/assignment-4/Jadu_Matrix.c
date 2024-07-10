#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;
    if(row != col)
    {
        flag = 0;
    }
    else{
         for (int i = 0; i < row; i++) {
            if (arr[i][i] != 1 || arr[i][row - i - 1] != 1) {
                flag = 0; 
                
            }
            for (int j = 0; j < col; j++) {
                if (i != j && j != row - i - 1 && arr[i][j] != 0) {
                    flag = 0; 
                 
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
