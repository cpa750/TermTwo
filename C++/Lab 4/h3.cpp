#include "h3.h"

using std::array;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

struct Student
{
    int ID;
    array<double, 4> marks;
    double avg;
};

void calculateAverages(vector<Student>& students)
{
    for (int i {0}; i < students.size(); ++i)
    {
        double avg {0};
        for (double j: students[i].marks)
        {
            avg += j;
        }

        avg /= students[i].marks.size();
        students[i].avg = avg;
    }
}

double calculateClassAvg(const vector<Student>& students)
{
    double classAvg {0};
    for (Student i: students)
    {
        classAvg += i.avg;
    }

    if (students.empty())
    {
        std::cout << "Error: cannot divide by zero." << std::endl;
        return 0.0;
    }
    else
    {
        classAvg /= students.size();
        return classAvg;
    }
}

vector<Student> readStudentsFromFile(const string& filename)
{
    vector<Student> students;

    ifstream file(filename);
    string line;
    while (getline(file, line))
    {
        vector<string> substrings = splitStringByChar(line, ' ');
        Student student;
        student.ID = stoi(substrings.at(0));
        student.marks = {stod(substrings.at(1)),
                         stod(substrings.at(2)),
                         stod(substrings.at(3)),
                         stod(substrings.at(4))};
        students.push_back(student);
    }
    file.close();

    return students;
}

vector<string> splitStringByChar(const string& s, char c)
{
    vector<string> substrings;
    string substring;
    for (auto i: s) // Looping over every char in the string
    {
        if (i != c) substring.push_back(i);
        else
        {
            substrings.push_back(substring);
            substring = "";
        }
    }
    if (substring.empty()) substrings.push_back(substring);
    /*
     * Must push back subtring one last time.
     * This is to ensure all substrings are returned if
     * the line does not end in a space.
     */
    return substrings;
}

void writeStudentsToFile(const vector<Student>& students, const string& filename)
{
    ofstream file(filename);

    for (Student i: students)
    {
        file << i.ID << " " << i.avg << std::endl;
    }
    file.close();
}

int main()
{
    vector<Student> students {readStudentsFromFile("../students2.txt")};
    calculateAverages(students);
    double classAvg {calculateClassAvg(students)};
    std::cout << "Class average: " << classAvg << std::endl;
    writeStudentsToFile(students, "../students3.txt");

    return 0;
}
