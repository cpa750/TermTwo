#ifndef LAB3_H1_H
#define LAB3_H1_H

#include <string>
#include <iostream>
#include <vector>

using std::string;
using std::vector;

string calculateAverageGrade(vector<double> grades);
vector<double> getMarksFromUser(int markCount);
vector<int> getReferredModuleIndices(vector<double> grades);
void funcToCallFromMain();

// Code for problem 2
double getMark();

// Code for problem 3
vector<int> getFinalMarkTypeCount(vector<double> marks);

#endif // LAB3_H1_H
