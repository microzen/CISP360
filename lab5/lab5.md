# Lab5

[Link to code](./population.cpp)

## Population

Write a program that will predict the size of a population of organisms. The program should ask the user for the starting number of organisms, their average daily population increase (as a percentage, expressed as a fraction in decimal form: for example, 0.052 would mean a 5.2% increase each day), and the number of days they will multiply. A loop should display the size of the population for each day.

**Input Validation.** Do not accept a number less than 2 for the starting size of the population. If the user fails to satisfy this print a line with this message "The starting number of organisms must be at least 2.", display the prompt again and try to read the value. Similarly, do not accept a negative number for average daily population increase, using the message "The average daily population increase must be a positive value." and retrying. Finally, do not accept a number less than 1 for the number of days they will multiply and use the message "The number of days must be at least 1."

# Code:

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Population
{
private:
    int starting_ppl = 1;
    double increase = 0;
    double predictSizeOfPupulationByDay(int day)
    {
        // P(1+rate)^days
        double size = starting_ppl * pow((1 + increase), day);
        return size;
    }

public:
    Population(int ppl)
    {
        this->starting_ppl = ppl;
    }
    void setIncrease(double increase)
    {
        this->increase = increase;
    }
    /// @brief List a predict size of population in the increase rate for each day.
    /// @param day 
    void listPredictSizeOfPupulationByDay(int day = 0)
    {
        for (size_t i = 0; i < day; i++)
        {
            double size = predictSizeOfPupulationByDay(i);
            cout << "Day: " << i + 1 << "\tSize of population:" << size << endl;
        }
    }
};

void inputPopulation(int *starting_ppl);
void inputAverage(int *average);
void inputDays(int *day);

int main(int argc, char const *argv[])
{
    int starting_ppl = 0;
    int average = 0;
    int day = 0;
    Population *population = NULL;

    inputPopulation(&starting_ppl);
    inputAverage(&average);
    inputDays(&day);

    population = new Population(starting_ppl);
    population->setIncrease(average / 100.0);
    population->listPredictSizeOfPupulationByDay(day);

    if (population != NULL)
    {
        delete population;
    }

    return 0;
}

/// @brief Inputing and validation for population
/// @param starting_ppl 
void inputPopulation(int *starting_ppl)
{
    cout << "\nPlease input the number of starting population, than press [Enter]" << endl;
    cin >> *starting_ppl;
    if (*starting_ppl < 2)
    {
        cout << "The starting number of organisms must be at least 2." << endl;
        inputPopulation(starting_ppl); // Recursion
    }
}

/// @brief Inputing and validation for average
/// @param average 
void inputAverage(int *average)
{
    cout << "\nPlease input the average daily population increase (withoout %), than press [Enter]" << endl;
    cin >> *average;
    if (*average < 0)
    {
        cout << "The average daily population increase must be a positive value, than press [Enter]" << endl;
        inputAverage(average);
    }
}

/// @brief Inputing and validation for day
/// @param day 
void inputDays(int *day)
{
    cout << "Please input the number of days." << endl;
    cin >> *day;
    if (*day < 2)
    {
        cout << "The number of days must be at least 1." << endl;
        inputDays(day);
    }
}
```
