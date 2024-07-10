#include <iostream>
#include <string>
#include <algorithm>

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
     int totalMarks() const {
        return math_marks + eng_marks;
    }

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
    if (a.totalMarks() != b.totalMarks()) {
        return a.totalMarks() > b.totalMarks(); 
    } else {
        return a.id < b.id; 
    }
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i)
    {
        students[i].readData();
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; ++i)
    {
        students[i].printData();
    }

    return 0;
}
