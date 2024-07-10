#include <stdio.h>
int main() {
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int c=0,b=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 == 0)
        {
            c++;
        }else if (a[i] % 3 == 0)
        {
            b++;
        }
        
    }
    

    printf("%d %d",c,b);
    return 0;
}
