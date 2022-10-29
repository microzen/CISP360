#include <iostream>

using namespace std;
// Quickly Exclusion Search / Disorder
void swap(int *, int *);
int sorting(int x[], int start, int end);

int main(int argc, char const *argv[])
{
    int x[] = {3245345, 6654, 345, 98234, 812, 3, 2, 4, 6, 12, 65, 786, 56, 1993, 1239, 9854, 23459, 234, 212, 44, 45, 66, 32, 23, 99, 81};//even

    int x_size = sizeof(x) / sizeof(x[0]);

    const bool isEven = x_size % 2 == 0;
    const int mid_index = x_size / 2;

    int start = 0;
    int end = x_size - 1;
    int index = -1;
    // O(nlog(n))
    while (index != mid_index) // index == mid O(log(n))
    {
        index = sorting(x, start, end); // O(log(n))
        if (index > mid_index) // range [start to index]
        {
            end = index - 1;
        }
        else if (index < mid_index) // range [index to end]
        {
            start = index + 1;
        }
        else
            break;
    }

    cout << x[mid_index] << endl;
    if (isEven) // even, O(n)
    {
        for (size_t i = 0; i < mid_index - 1; i++)
        {
            if (x[i] > x[i + 1])
            {
                swap(x[i], x[i + 1]);
            }
        }
        cout << x[mid_index - 1] << endl;
    }
    return 0;
}
// O(log(n))
int sorting(int x[], int start, int end)
{
    int pos = end--;
    while (start <= end)
    {
        while (x[start] < x[pos] && start < pos) // greater than mid
        {
            start++;
        }
        while (x[end] > x[pos] && end > start) // less than mid
        {
            end--;
        }
        if (start >= end) // sizeover
            break;
        swap(x[start], x[end]);
    }
    swap(x[start], x[pos]); //mid

    return start;
}
void swap(int *x, int *y)
{
    int *temp = nullptr;
    temp = x;
    x = y;
    y = temp;
}