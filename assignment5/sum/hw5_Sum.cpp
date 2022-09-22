#include <iostream>
using namespace std;
int sequence(int number);
int inputNumber();
int main(int argc, char const *argv[])
{
    /* your code */
    return 0;
}
/// @brief a sequence to calculate 1 to a number.
/// @param number a number that must greater than 0.
/// @return result
int sequence(int number)
{
    if (number < 0)
        throw "It can't be a negative number.";
    long long result = 0;
    // int k = 1;
    // long long h = number;
    // result = (h * (h + 1)) / 2;
    // return result;
    for (size_t i = 1; i <= number; i++)
    {
        result += i;
        /* code */
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