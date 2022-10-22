#include <iostream>
using namespace std;

#define NUMSIZE 10
const int NUMBERS[NUMSIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
bool isWinByLinnerSearch(int);
int main(int argc, char const *argv[])
{
    int input;
    cout << "Please enter this week's 5-digit winning lottery number: ";
    cin >> input;
    bool isWin = isWinByBinarySearch(input);
    if (isWin)
    {
        cout << "You have a winning ticket." << endl;
    }
    else
    {
        cout << "You did not win this week." << endl;
    }
    return 0;
}
bool isWinByLinnerSearch(int item)
{
    for (size_t i = 0; i < NUMSIZE; i++)
    {
        if (NUMBERS[i] == item)
        {
            return true;
        }
    }
    return false;
}
