#include <iostream>
#include <time.h>
#include <thread>
#include <cerrno>

using namespace std;

long long sequence(int number);
int inputNumber();
void outputModule(long long result, clock_t cl);

int main(int argc, char const *argv[])
{
    int number; // user's input
    long long result; // result of calcution
    clock_t cl; // clock
    double seconds;

    // Could you help me to finihed the input number moudle?
    number = inputNumber(); // input a number

    cl = clock(); // start time
    result = sequence(number);
    cl = clock() - cl; // end time

    // convert clock_t to secounds on the double type.
    seconds = (static_cast<double>(cl)) / CLOCKS_PER_SEC;

    // Could you help me to finihed the ouput moudle? #TODO
    outputModule(result, (static_cast<double>(cl)) / CLOCKS_PER_SEC);

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
/// @brief ask user to input a number and the number must greater than 0.
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

/// @brief Output the resule and seconds that calcuated
/// @param result The result of the sum
/// @param secs Clock , secounds
void outputModule(long long result, double secs)
{
    // #TODO
}