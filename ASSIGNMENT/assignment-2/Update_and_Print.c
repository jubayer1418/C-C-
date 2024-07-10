#include <stdio.h>
int main() {
    int N,x,v;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    };
    
    scanf("%d%d",&x,&v);
    a[x] = v;
    for (int i = N-1; i >= 0; i--) {
        printf("%d ", a[i]);
    };

    return 0;
}
