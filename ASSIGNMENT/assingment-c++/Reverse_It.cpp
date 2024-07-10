#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;

    void readData()
    {
        cin >> name >> cls >> section >> id;
    }

    void printData() const
    {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    Student students[100];

    for (int i = 0; i < N; ++i)
    {
        students[i].readData();
    }

    for (int i = 0; i < N / 2; ++i)
    {
        swap(students[i].section, students[N - i - 1].section);
    }

    for (int i = 0; i < N; ++i)
    {
        students[i].printData();
    }

    return 0;
}
