#include <iostream>
#include "h1.h"

using std::vector;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;

void writeStudents(const vector<Student>& students, const string& filename)
{
    ofstream file(filename);
    for (Student student: students)
    {
        file << student.ID << " " << student.Mark << endl;
    }
    file.close();
}

vector<Student> readStudents(const string& filename)
{
    vector<Student> students;
    ifstream file(filename);
    string line;

    while (getline(file, line))
    {
        Student s;
        s.ID = stoi(line.substr(0, 4));
        s.Mark = stod(line.substr(5));
        students.push_back(s);
    }

    file.close();
    return students;
}

int main()
{
    vector<Student> students {{4600, 45.5}, {1503, 76.0}, {2642, 59.0}, {8880, 37.0}, {5268, 85.0}, {7391, 62.5}};
    writeStudents(students, "../students.txt");

    vector<Student> students2 = readStudents("../students.txt");
    for(auto i: students2) cout << i.ID << ' ' << i.Mark << endl;
}
