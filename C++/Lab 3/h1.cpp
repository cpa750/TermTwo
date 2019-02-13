#include "h1.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

/* I used std::vector over a traditional array here as it allows for better code modularity
 * (e.g. no need for global variables or magic numbers for array size,
 * and std::vector is dynamically resizable)
*/

string calculateAverageGrade(vector<double> grades)
{
    double average = 0;

    for (double i: grades)
    {
        average += i;
    }
    average /= grades.size();

    if (average >= 70) return "1st";
    else if (average >= 60) return "2i";
    else if (average >= 50) return "2ii";
    else if (average >= 40) return "3rd";
    else return "Fail";
}

vector<double> getMarksFromUser(int markCount)
{
    vector<double> marks;

    for (int i = 0; i < markCount; ++i)
    {
        double mark = getMark();
        marks.push_back(mark);
    }

    return marks;
}

vector<int> getReferredModuleIndices(vector<double> grades)
{
    vector<int> referredModuleIndices = {};

    for (int i = 0; i < grades.size(); ++i)
    {
        /* This appends the 'index' of the referred module to the new vector
         * if the module grade is below 35.
        */
        if (grades[i] < 35) referredModuleIndices.push_back(i);
    }

    return referredModuleIndices;
}

void funcToCallFromMain()
{
    /*
     * Only wrote this function so I only have to write
     * one line in the main.cpp file
     * as opposed to writing more logic in that file
     * (which will look messier when it gets commented out).
     */

    int numOfMarks;
    cout << "Enter the number of marks: ";
    cin >> numOfMarks;
    vector<double> marks = getMarksFromUser(numOfMarks);
    string averageMark = calculateAverageGrade(marks);
    vector<int> referredModules = getReferredModuleIndices(marks);

    if ( !referredModules.empty() )
    {
        for (int i: referredModules)
        {
            cout << "Referred in module index #" << i << endl;
        }
    }

    vector<int> moduleMarks = getFinalMarkTypeCount(marks);
    cout << "# of Modules with 1st Mark: " << moduleMarks[0] << endl;
    cout << "# of Modules with 2i Mark: " << moduleMarks[1] << endl;
    cout << "# of Modules with 2ii Mark: " << moduleMarks[2] << endl;
    cout << "# of Modules with 3rd Mark: " << moduleMarks[3] << endl;
    cout << "# of Modules Failed: " << moduleMarks[4] << endl;
    /*
     * There is no good way to convert from a vector index (type int)
     * to a module mark (type string) hence the ugly code above
     */

    cout << "Final mark: " << averageMark << endl;
}

// Code for problem 2
double getMark()
{
    int mark = -1;
    while ( (mark < 0) || (mark > 100) )
    {
        cout << "Please enter a valid mark (0-100): ";
        cin >> mark;
        cout << endl;
    }

    return mark;
}

// Code for problem 3
vector<int> getFinalMarkTypeCount(vector<double> marks)
{
    vector<int> markTypeCount = { 0, 0, 0, 0, 0 };

    for (double i: marks)
    {
        if (i >= 70) ++markTypeCount[0];
        else if (i >= 60) ++markTypeCount[1];
        else if (i >= 50) ++markTypeCount[2];
        else if (i >= 40) ++markTypeCount[3];
        else ++markTypeCount[4];
    }

    return markTypeCount;
}

