#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    string word = "";
    bool found = false;

    for (char c : S)
    {
        if (c == ' ')
        {
            if (word == "Jessica")
            {
                found = true;
                break;
            }
            word = "";
        }
        else
        {
            word += c;
        }
    }

    if (word == "Jessica")
    {
        found = true;
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
