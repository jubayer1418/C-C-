#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    void readData()
    {
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
    }

    void printData() const
    {
        cout << name << " " << cls << " " << section << " " << id << " " << math_marks << " " << eng_marks << endl;
    }
};

bool cmp(Student a, Student b)
{

    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    else if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; ++i)
    {
        a[i].readData();
    }

    sort(a, a + N, cmp);

    for (int i = 0; i < N; ++i)
    {
        a[i].printData();
    }

    return 0;
}
