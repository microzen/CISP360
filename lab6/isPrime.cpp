#include <iostream>

bool isPrime(long long number)
{
    if (number <= 1)
        throw "Number must be greater than 1.";
    if (number == 2)
        return true;
    if (number % 2 == 0) // prime can not be even, even can be divided evenly by 2
        return false;
    for (long long i = 3; i <= number / 2; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long num;
    std::cout << "Input a number: ";
    std::cin >> num;

    if (isPrime(num))
    {
        std::cout << num << " is a prime number";
    }
    else
    {
        std::cout << num << " is not a prime number";
    }
}