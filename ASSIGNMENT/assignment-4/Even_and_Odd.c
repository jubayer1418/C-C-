#include <stdio.h>

void odd_even(int A[], int N) {
    int even_count = 0, odd_count = 0;
    
   
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    
    
    printf("%d %d", even_count, odd_count);
    
}

int main() {
    int N;
   
    scanf("%d", &N);
    
    int A[N];
  
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    odd_even(A, N);
    
    return 0;
}
