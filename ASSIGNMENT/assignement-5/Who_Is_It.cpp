#include <iostream>

using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;

    Student(int id = 0, string name = "", char section = 'A', int totalMarks = 0) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }

    bool operator<(const Student &other) const {
        if (this->totalMarks != other.totalMarks)
            return this->totalMarks < other.totalMarks;
        return this->id > other.id;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student topStudent;
        for (int i = 0; i < 3; ++i) {
            int id;
            string name;
            char section;
            int totalMarks;
            cin >> id >> name >> section >> totalMarks;
            Student currentStudent(id, name, section, totalMarks);

            if (i == 0 || !(currentStudent < topStudent)) {
                topStudent = currentStudent;
            }
        }

        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMarks << endl;
    }

    return 0;
}
