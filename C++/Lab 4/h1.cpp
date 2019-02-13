#include <iostream>
#include "h1.h"

using std::vector;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;
using std::iter_swap;

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

    sortStudents(students);
    return students;
}

void sortStudents(vector<Student>& students)
{
    bool swappedFlag = true;

    while (swappedFlag)
    {
        swappedFlag=false; // for this cycle through all the array
        for (int i {0}; i < students.size()-1; ++i)
        {
            if (students.at(i).Mark < students.at(i+1).Mark)
            {
                iter_swap(students.begin()+i, students.begin()+i+1);
                /*
                 * Swapping the two elements. iter_swap is a function
                 * defined in the standard library
                 */
                swappedFlag = true;
            }
        }
    }
}

int main()
{
    vector<Student> students {{4600, 45.5}, {1503, 76.0}, {2642, 59.0}, {8880, 37.0}, {5268, 85.0}, {7391, 62.5}};
    writeStudents(students, "../students.txt");

    vector<Student> students2 = readStudents("../students.txt");
    for(auto i: students2) cout << i.ID << ' ' << i.Mark << endl;
}
