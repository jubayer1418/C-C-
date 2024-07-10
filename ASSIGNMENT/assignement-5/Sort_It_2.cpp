#include <iostream>
#include <algorithm>
using namespace std;
int* sort_it(int* A, int N) {
   
    int* sortedArray = new int[N];
    

    std::copy(A, A + N, sortedArray);

    std::sort(sortedArray, sortedArray + N, std::greater<int>());
    
    return sortedArray;
}

int main()
{
    int N;

    cin >> N;

    int A[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

     int* sortedArray=  sort_it(A, N);

    for (int i = 0; i < N; ++i)
    {
        cout << sortedArray[i] << " ";
    }



    return 0;
}
