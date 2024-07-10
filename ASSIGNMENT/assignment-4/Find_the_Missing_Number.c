// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         int b, c, d;
//         scanf("%d %d %d %d", &a, &b, &c, &d);
//         if (b == 0 || c == 0 || d == 0)
//         {
//             printf("-1\n");
//             continue;
//         }

//         int r = a / (b * c * d);
//         if (a % (b * c * d) != 0)
//         {
//             printf("-1\n");
//         }
//         else
//         {

//             printf("%d\n", r);
//         }
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        long long int a;
        int b, c, d;
        scanf("%lld %d %d %d", &a, &b, &c, &d);

        // Check if any of the dimensions is zero
        if (b == 0 || c == 0 || d == 0) {
            printf("-1\n");
            continue; // Skip to the next iteration of the loop
        }

        // Check if a is divisible evenly by (b * c * d)
        if (a % (b * c * d) != 0) {
            printf("-1\n");
        } else {
            printf("%lld\n", a / (b * c * d));
        }
    }
    
    return 0;
}
