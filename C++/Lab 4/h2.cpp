#include "h2.h"

using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;

void combineFiles(const string& fileneme1, const string& filename2, const string& outfilename)
{
    ifstream file1(fileneme1);
    ifstream file2(filename2);
    ofstream outfile(outfilename);

    string line1;
    string line2;
    while (getline(file1, line1) && getline(file2, line2))
    /*
     * This line makes sure that the function will only
     * read the files so long as there are valid lines in both
     */
    {
        vector<string> line1substrs { splitStringByChar(line1, ' ') };
        vector<string> line2substrs { splitStringByChar(line2, ' ') };

        if ( ( line1substrs.at(0) != line2substrs.at(0) ) ||
        ( line1substrs.at(1) != line2substrs.at(1) ) )
        /*
         * The above code checks if either the first or last names are not the same.
         * If this is the case, it is an error and the function will exit.
         */
        {
            std::cout << "Error: Names mismatch." << std::endl;
            return;
        }
        else
        {
            outfile << line1substrs.at(0) << " " << line1substrs.at(1) <<
            line1substrs.at(2) << " " << line2substrs.at(2) << std::endl;
        }
    }
    file1.close();
    file2.close();
    outfile.close();
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
    return substrings;
}

int main()
{


    return 0;
}
