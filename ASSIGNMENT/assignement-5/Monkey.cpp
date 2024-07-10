#include <iostream>
#include <algorithm>

using namespace std;

string amenaWriting(string line) {
    string result = "";

    // Remove spaces from the line
    line.erase(remove(line.begin(), line.end(), ' '), line.end());

    // Sort the characters alphabetically
    sort(line.begin(), line.end());

    return line;
}

int main() {
    string line;
    while (getline(cin, line)) {
     
        cout << amenaWriting(line) << endl;
    }
    return 0;
}
