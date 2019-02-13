#ifndef LAB_4_H1_H
#define LAB_4_H1_H

#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using std::vector;
using std::string;

struct Student
{
    int ID;
    double Mark;
};

void writeStudents(const vector<Student>& students, const string& filename);
vector<Student> readStudents(const string& fileName);
void sortStudents(vector<Student>& students);

#endif //LAB_4_H1_H
