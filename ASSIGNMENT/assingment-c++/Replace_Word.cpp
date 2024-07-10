#include <iostream>
#include <string>

using namespace std;

string replace(string S, string X)
{
    string result;
    int X_len = X.length();
    int i = 0;

    while (i < S.length())
    {
        bool match = true;

        for (int j = 0; j < X_len; ++j)
        {
            if (i + j >= S.length() || S[i + j] != X[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            result += '#';
            i += X_len;
        }
        else
        {

            result += S[i];
            ++i;
        }
    }

    return result;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    // getchar();

    for (int i = 0; i < T; ++i)
    {
        string S, X;
        getline(cin, S, ' ');
        getline(cin, X);

        string result = replace(S, X);
        cout << result << endl;
    }

    return 0;
}
