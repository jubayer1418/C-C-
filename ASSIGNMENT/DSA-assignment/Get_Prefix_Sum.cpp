#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
  
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    // reverse pre array
    for (int i = 0; i < n / 2; i++)
    {
        long long temp = pre[i];
        pre[i] = pre[n - i - 1];
        pre[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}