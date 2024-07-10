#include <stdio.h>
int main() {
    
   int l;
   scanf("%d",&l);
   for(int i=0; i<l; i++) 
   {
     int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int T;
    int find = 0;
    scanf("%d", &T);
    for(int i = 0; i < N; i++) 
    {
        if(A[i] == T){
           find = 1;
        }
    }

    if(find == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
   }
    return 0;
}
