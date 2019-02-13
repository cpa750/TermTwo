#ifndef LAB_4_H3_H
#define LAB_4_H3_H

#include <array>
#include <exception>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::string;
using std::vector;

struct Student;

void calculateAverages(vector<Student>& students);
double calculateClassAvg(const vector<Student>& students);
vector<Student> readStudentsFromFile(const string& filename0);
vector<string> splitStringByChar(const string& s, char c);
void writeStudentsToFile(const vector<Student>& students, const string& filename);

#endif //LAB_4_H3_H
