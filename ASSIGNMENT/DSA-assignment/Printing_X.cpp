#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int middle = N / 2;

    for (int i = 0; i < middle; ++i)
    {
        for (int j = 0; j < i; ++j)
            cout << " ";
        cout << "\\";
        for (int j = 0; j < N - 2 * i - 2; ++j)
            cout << " ";
        cout << "/" << endl;
    }

    for (int i = 0; i < middle; ++i)
        cout << " ";
    cout << "X" << endl;

    for (int i = middle + 1; i < N; ++i)
    {
        for (int j = 0; j < N - i - 1; ++j)
            cout << " ";
        cout << "/";
        for (int j = 0; j < 2 * (i - middle) - 1; ++j)
            cout << " ";
        cout << "\\" << endl;
    }

    return 0;
}
