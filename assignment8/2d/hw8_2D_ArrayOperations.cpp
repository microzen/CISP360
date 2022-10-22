#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

using namespace std;

#define ROWSIZE 3
#define COLUMNSIZE 3
// two-dimensional number array
typedef int (*TD_NUMARRAY)[COLUMNSIZE];

int getTotal(TD_NUMARRAY);
double getAverage(TD_NUMARRAY);
int getRowTotal(TD_NUMARRAY, int);
int getColumnTotal(TD_NUMARRAY, int);
int getHighestInRow(TD_NUMARRAY, int);
int getLowestInRow(TD_NUMARRAY, int);

int main(int argc, char const *argv[])
{
    int row, column;
    int numbers[ROWSIZE][COLUMNSIZE];
    int *index = *(*(&numbers));
    int *end = index + (ROWSIZE * COLUMNSIZE) - 1;
    srand(time(NULL));
    do
    {
        *index = rand() % 10 + 1;
        cout << *index << "\t";
        if ((end - index) % COLUMNSIZE == 0)
            cout << "\n";
        index++;
    } while (index <= end);

    row = rand() % ROWSIZE;
    column = rand() % COLUMNSIZE;

    cout << "The total of the array element is " << getTotal(numbers) << endl;
    cout << "The average of the array element is " << getAverage(numbers) << endl;
    cout << "The total of row " << row + 1 << " is " << getRowTotal(numbers, row) << endl;
    cout << "The total of column " << column + 1 << " is " << getColumnTotal(numbers, column) << endl;
    cout << "The highest value in row " << row + 1 << " is " << getHighestInRow(numbers, row) << endl;
    cout << "The lowest value in row" << row + 1 << " is " << getLowestInRow(numbers, row) << endl;

    return 0;
}

/// @brief This function should accept a two-dimensional array as its argument
/// and return the total of all the values in the array.
/// @param numbers
/// @return the total of all the values in the array
int getTotal(int numbers[][COLUMNSIZE])
{
    // TODO:
    return 0;
}

/// @brief This function should accept a two-dimensional array as its
/// argument and return the average of all the values in the array.
/// @param numbers
/// @return the average of all the values in the array
double getAverage(int numbers[][COLUMNSIZE])
{
    int total = getTotal(numbers);
    return ((total + 0.0) / (ROWSIZE * COLUMNSIZE));
}

/// @brief This function should accept a two-dimensional array as its first
/// argument and an integer as its second argument. The second argument should be
/// the subscript of a row in the array. The function should return the total of the
/// values in the specified row.
/// @param numbers
/// @param row
/// @return the total of the values in the specified row
int getRowTotal(int numbers[][COLUMNSIZE], int row)
{
    // TODO:
    return 0;
}

/// @brief This function should accept a two-dimensional array as its first
/// argument and an integer as its second argument. The second argument should be
/// the subscript of a column in the array. The function should return the total of the
/// values in the specified column.
/// @param numbers
/// @param column
/// @return the total of the values in the specified column
int getColumnTotal(int numbers[][COLUMNSIZE], int column)
{
    int total = 0;
    for (int i = 0; i < ROWSIZE; i++)
        total += numbers[i][column];
    return total;
}

/// @brief This function should accept a two-dimensional array as its
/// first argument and an integer as its second argument. The second argument should
/// be the subscript of a row in the array. The function should return the highest value
/// in the specified row of the array.
/// @param numbers
/// @param row
/// @return the highest value in the specified row of the array
int getHighestInRow(int numbers[][COLUMNSIZE], int row)
{
    // TODO:
    return 0;
}

/// @brief This function should accept a two-dimensional array as its first
/// argument and an integer as its second argument. The second argument should be
/// the subscript of a row in the array. The function should return the lowest value in
/// the specified row of the array.
/// @param numbers
/// @param row
/// @return the lowest value in the specified row of the array
int getLowestInRow(int numbers[][COLUMNSIZE], int row)
{
    int lowest = INT_MAX;
    numbers += row;
    for (int item : *numbers)
        lowest = item < lowest ? item : lowest;
    return lowest;
}