#include <stdio.h>
int count_before_one (int a[], int n)
{
   int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            break;
        }
        count++;
    }
    return count;

}
int main() {
    // count_before_one
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", count_before_one(a, n));
    
    // count_after_one


    return 0;
}
