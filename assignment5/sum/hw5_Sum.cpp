#include <iostream>
#include <time.h>
#include <thread>
#include <cerrno>

using namespace std;

long long sequence(int number);
int inputNumber();

int main(int argc, char const *argv[])
{
    int number;
    long long result;
    double seconds;
    clock_t c; // clock 

    number = inputNumber();

    c = clock();
    result = sequence(number);
    c = clock() - c;

    cout << "The sum form 1 to " << number << " is: " << result << endl;

    cout << "Secends: " << ((float)c)/CLOCKS_PER_SEC << endl;
    return 0;
}
/// @brief a sequence to calculate 1 to a number.
/// @param number a number that must greater than 0.
/// @return result
long long sequence(int number)
{
    if (number < 0)
        throw "It can't be a negative number.";
    long long result = 0;
    // result = (h * (h + 1)) / 2;
    for (size_t i = 1; i <= number; i++)
    {
        result += i;
        // this_thread::sleep_for(chrono::microseconds(1)); // simulated calcuations
    }
    return result;
}
/// @brief ask user to input a number.
/// @return input result
int inputNumber()
{
    int num;
    do
    {
        cout << "\nPlease input a number that must greater than 0, than press [Enter]" << endl;
        cin >> num;
        if (num < 0)
        {
            cout << "The number must greater than 0" << endl;
            continue;
        }
        return num;
    } while (true);
}