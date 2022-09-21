#include <iostream>
int sequence(int number);
int main(int argc, char const *argv[])
{
    /* your code */
    return 0;
}
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
