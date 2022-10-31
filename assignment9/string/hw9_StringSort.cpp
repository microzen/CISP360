/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #9 -  String Selection Sort
Source file name: hw9_StringSort.cpp
Program description: A program that sorts names 
with selection sort
*****************************************************/

#include <iostream>
#include <string>
using namespace std;
void DisplayName(string *names, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << names[i] << endl;
    }
}
int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth"};
    // Insert your code to complete this program
    cout<<" ------ Original ------\n";
    DisplayName(names, NUM_NAMES);
    int min = 0;
    for (int i = 0; i < NUM_NAMES - 1; i++)
    {
        min = i;
        for (int k = i + 1; k < NUM_NAMES; k++)
        {
            if (names[min] > names[k])
            {
                min = k;
            }
        }
        if (min != i)
        {
            swap(names[i], names[min]);
        }
    }

    cout<<"\n ------ Sorted ------\n";
    DisplayName(names, NUM_NAMES);
    return 0;
}