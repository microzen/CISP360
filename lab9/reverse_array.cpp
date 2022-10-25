#include <cstdlib>
#include <iostream>
using namespace std;

int* reverseArray(int* arrays,int size);

int main(int argc, char const *argv[])
{
    const int size = 5;
    int arrays[size] = {19,54,234,54,22};

    int *newArray = reverseArray(arrays,size);
    for (size_t i = 0; i < size; i++)
    {
        cout<<newArray[i]<<endl;
    }
    
    return 0;
}

int* reverseArray(int* arrays,int size){
    int *newArray = (int*) malloc (sizeof(int)*size);
    int *loop = &newArray[0];
    for (int i = size -1 ; i >= 0; i--)
    {
        *loop++ = arrays[i];
    }
    return &newArray[0];
}