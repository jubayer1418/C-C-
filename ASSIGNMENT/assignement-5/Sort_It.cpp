#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
    std::sort(A, A + n);

    for (int i = 0; i < n; ++i)
    {
        std::cout << A[i];
    }
    std::cout << std::endl;

    std::sort(A, A + n, std::greater<int>());

    for (int i = 0; i < n; ++i)
    
        std::cout << A[i];
    }

    return 0;
}
// #include <iostream>
// #include <algorithm>

// int main()
// {
//     // Define the array
//     int A[] = {5, 2, 7, 1, 9, 3};
//     int n = sizeof(A) / sizeof(A[0]);

// Sort and print in ascending order
// std::sort(A, A + n);
// std::cout << "Array sorted in ascending order:";
// for (int i = 0; i < n; ++i) {
//     std::cout << " " << A[i];
// }
// std::cout << std::endl;

// // Sort and print in descending order
// std::sort(A, A + n, std::greater<int>());
// std::cout << "Array sorted in descending order:";
// for (int i = 0; i < n; ++i) {
//     std::cout << " " << A[i];
// }
// std::cout << std::endl;

// return 0;
// }
