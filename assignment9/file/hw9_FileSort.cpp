/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #9 -  Using Files—String Selection Sort Modification
Source file name: hw9_FileSort.cpp
Program description: A program that sorts names from a file
with selection sort
*****************************************************/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void DisplayName(string *names, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << names[i] << endl;
    }
}
void *convertArrayToFile(string path, const string *names, const int SIZE)
{
    ofstream fileStream;
    fileStream.open(path);
    for (int i = 0; i < SIZE; i++)
    {
        fileStream << names[i];
    }
    fileStream.close();
}
string *convertFileToArray(string path, const int SIZE)
{
    ifstream fileStream;
    string *names = new string[SIZE];
    fileStream.open(path);
    if (!fileStream)
    {
        cout << "error opening source file." << endl;
        return 0;
    }
    for (int i = 0; i < SIZE; i++)
    {
        getline(fileStream, names[i]);
    }
    fileStream.close();
    return names;
}
int main()
{
    const int NUM_NAMES = 20;
    // string outnames[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
    //                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
    //                               "Taylor, Terri", "Johnson, Jill",
    //                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
    //                               "James, Jean", "Weaver, Jim", "Pore, Bob",
    //                               "Rutherford, Greg", "Javens, Renee",
    //                               "Harrison, Rose", "Setzer, Cathy",
    //                               "Pike, Gordon", "Holland, Beth"};
    // convertArrayToFile("./names.txt", outnames, 20);
    string *innames = convertFileToArray("./names.txt", 20);
    // Insert your code to complete this program
    cout << " ------ Original ------\n";
    DisplayName(innames, NUM_NAMES);
    int min = 0;
    for (int i = 0; i < NUM_NAMES - 1; i++)
    {
        min = i;
        for (int k = i + 1; k < NUM_NAMES; k++)
        {
            if (innames[min] > innames[k])
            {
                min = k;
            }
        }
        if (min != i)
        {
            swap(innames[i], innames[min]);
        }
    }

    cout << "\n ------ Sorted ------\n";
    DisplayName(innames, NUM_NAMES);
    return 0;
}